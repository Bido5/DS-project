#include "iostream"
#include "list"
#include <cmath>
#include "cstring"
#include "queue"
#include "HashMap.h"
using namespace std;
#ifndef DS_PROJECT_HUFFMAN_H
#define DS_PROJECT_HUFFMAN_H

#define FREQ_ARR_SIZE 128
class Huffman
{
private:
    struct MinHeapNode {
        char data;
        int freq;
        MinHeapNode* left, * right;
        //constructor to make a heap node
        MinHeapNode(char data, int freq) {
            this->left = this->right = NULL;
            this->data = data;
            this->freq = freq;
        }
    };

    // to compare the frequencies to make a minimum heap
    struct compareNodeFreq {
        bool operator()(MinHeapNode* left, MinHeapNode* right)
        {
            return(left->freq > right->freq);
        }
    };
    int freqArr[FREQ_ARR_SIZE] = { 0 };

public:
    priority_queue< MinHeapNode*, vector<MinHeapNode*>, compareNodeFreq> heap;
    int* getFreqArray();
    void printHuff(struct MinHeapNode* root, string codeword);
    void HuffmanCodes(vector<pair<char, int>> freqVec, HashMap* hash);
    void HuffToHash(struct MinHeapNode* root, string codeword, HashMap* hash);

    void createFreqArr(string text);
    void printFreqArr();

    void createMinHeap();

    vector< pair<char, int>>freqToPairs(int arr[]);

    string decode(struct MinHeapNode* root, string msg);

    string HuffmanDecodes(vector<pair<char, int>> freqVec, string msg);
};
#endif // DS_PROJECT_HASHMAP_H
