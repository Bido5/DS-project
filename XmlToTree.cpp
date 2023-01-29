#include <iostream>
#include <stack>
#include <string.h>
#include <fstream>
#include <vector>

#include "XmlToTree.h"

using namespace std;

// int count = 0;
vector<string> postsList;

vector<string> Node::getChildren(Node *node)
{
    vector<string> childrenNames;
    for (int i = 0; i < children.size(); i++)
    {
        childrenNames.push_back(node->children[i]->data);
        cout << endl
             << node->children[i]->data;
    }
    return childrenNames;
}

// this class is used to build tree depth first after receiving them in a vector
int nextIndex = 1;
void Node::buildTree(vector<string> xml)
{

    for (int i = 0; i < xml.size(); i++)
    {
        // check if it is closing tag
        // if yes return to go one level up
        if (xml[nextIndex][1] == '/')
        {
            nextIndex++;
            return;
        }
        // put the data on a node
        Node *d = new Node(xml[nextIndex]);
        children.emplace_back(d);
        nextIndex++;
        if (xml[nextIndex - 1][0] == '<') // enter recursion if not leaf node
        {
            d->buildTree(xml); // building tree depth first;
        }
    }
}
string bodyTextTopic;
void Node::searchByTopic(Node *root, string topic)
{
    bool foundTopic = false;
    // leaf case
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {

        if (root->data == "<body>")
        {
            bodyTextTopic = root->children[0]->data;
        }
        if (root->data == "<topic>")
        {
            cout << endl
                 << root->children[0]->data << " vs " << topic << endl;
            string currentTopic;
            currentTopic = (root->children[0]->data);
            cout << "comparison" << currentTopic.compare(topic) << endl;
            if (currentTopic.compare(topic) == 0)
            {
                cout << "innnn";
                // cout<<"found it"<<endl;
                foundTopic = true;
            }
            if (foundTopic == true)
            {
                postsList.push_back(bodyTextTopic);
                cout << "*****" << bodyTextTopic << endl;
                foundTopic = false;
            }
        }

        if (root->children[0]->children != NULL)
        {
            searchByTopic(root->children[i], topic);
        }
    }
}
string bodyText;
void Node::searchByWord(Node *root, string word)
{
    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        if (root->data == "<body>")
        {
            bodyText = root->children[0]->data;
            if (bodyText.find(word) != string::npos) // to see if it is found in the body
            {
                cout << "found !!!!!!!!!!!";
            }
        }

        searchByWord(root->children[i], word);
    }
}
