#include "iostream"
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int count = 0;

// this class is used to build tree depth first after receiving them in a vector
int nextIndex = 1;
class Node
{
private:
    string data;
    vector<Node *> children;

public:
    Node(string data)
    {
        this->data = data;
    }
    string getData()
    {
        return this->data;
    }
    vector<Node *> getChildren()
    {
        return children;
    }

    void buildTree(vector<string> xml);
    void searchByTopic(Node *root, string topic);
    void searchByWord(Node *root, string word);
    vector<string> getChildren(Node *node);
};
