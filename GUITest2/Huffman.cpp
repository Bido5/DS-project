

#include "Huffman.h"

#define INTERNAL_NODE_SYMBOL '$'

void Huffman::createFreqArr(string text)
{
    for (int i = 0; i < text.size(); i++)
        freqArr[text[i]]++;
}
int *Huffman::getFreqArray()
{
    return freqArr;
}
vector<pair<char, int>> Huffman::freqToPairs(int arr[])
{
    vector<pair<char, int>> result;
    for (int i = 0; i < 128; i++)
    {
        int j = 0;
        if (arr[i] != 0)
        {
            result.emplace_back(char(i), arr[i]);
            j++;
        }
    }
    return result;
}
void Huffman::printFreqArr()
{
    for (int i = 0; i < 255; i++)
        cout << freqArr[i];
}
void Huffman::printHuff(struct MinHeapNode *root, string codeword)
{
    if (root == NULL)
        return;

    // since our text don't contain the symbol "#" it can be used to refer to internal nodes
    if (root->data != '$')
    {
        cout << root->data << ": " << codeword << endl;
    }
    printHuff(root->left, codeword + "0");
    printHuff(root->right, codeword + "1");
}

string Huffman::HuffmanDecodes(vector<pair<char, int>> freqVec, string msg)
{
    struct MinHeapNode *left, *right, *top;

    // create minimum heap so needs 3 parameters the last to arrange according to frequency
    // priority_queue< MinHeapNode*, vector<MinHeapNode*>, compareNodeFreq> heap;
    int size = freqVec.size();

    // filling the heap
    for (int i = 0; i < size; i++)
    {
        heap.push(new MinHeapNode(freqVec[i].first, freqVec[i].second));
    }
    while (heap.size() > 1)
    {
        left = heap.top();
        heap.pop();

        right = heap.top();
        heap.pop();

        MinHeapNode *temp = new MinHeapNode('$', left->freq + right->freq);
        temp->left = left;
        temp->right = right;

        heap.push(temp);
    }
    top = heap.top();
    string result = decode(top, msg);
    return result;
}

string Huffman::decode(struct MinHeapNode *root, string msg)
{
    struct MinHeapNode *curr = root;
    string xml = "";
    for (int i = 0; i < msg.length(); i++)
    {
        if (msg[i] == '0')
        {
            curr = curr->left;
        }
        else // msg=1
        {
            curr = curr->right;
        }
        if (curr->left == NULL and curr->right == NULL) // leaf node
        {
            xml += curr->data;
            cout << curr->data;
            curr = root;
        }
    }
    return xml + '\0';
}
