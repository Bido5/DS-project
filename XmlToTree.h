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

    void buildTree(vector<string> xml);
};
