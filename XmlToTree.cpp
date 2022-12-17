#include <iostream>
#include <stack>
#include <string.h>
#include <fstream>
#include <vector>

#include "XmlToTree.h"

using namespace std;

int count = 0;

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