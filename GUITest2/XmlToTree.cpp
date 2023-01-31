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
int next_Index = 1;
void Node::buildTree(vector<string> xml)
{

    for (int i = 0; next_Index < xml.size(); i++)
    {
        // check if it is closing tag
        // if yes return to go one level up
        if (xml[next_Index][1] == '/')
        {
            next_Index++;
            return;
        }
        // put the data on a node
        Node *d = new Node(xml[next_Index]);
        children.emplace_back(d);
        next_Index++;
        if (xml[next_Index - 1][0] == '<') // enter recursion if not leaf node
        {
            d->buildTree(xml); // building tree depth first;
        }
    }
}

bool checkBody(string body, string word)
{
    if (body.find(word) != string::npos) // to see if it is found in the body
        return true;
    else
        return false;
}
string bodyText;
void Node::searchForTopic(Node *root, string topic)
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
            bodyText = root->children[0]->data;
            if (checkBody(bodyText, topic)) // found the word in the body
            {
                foundTopic = true;
            }
        }
        if (root->data == "<topic>")
        {

            string currentTopic;
            currentTopic = (root->children[0]->data);
            if (currentTopic.compare(topic) == 0)
            {
                foundTopic = true;
            }
        }
        if (foundTopic == true)
        {
            postsList.push_back(bodyText);
            foundTopic = false;
        }

        searchForTopic(root->children[i], topic);
    }
}

vector<string> Node::getPosts()
{
    return postsList;
}
