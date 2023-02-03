#include <iostream>
#include <stack>
#include <string.h>
#include <fstream>
#include <vector>

#include "XmlToTree.h"

using namespace std;

// int count = 0;
vector<string> postsList;

vector<string> Node::getChildren(Node* node)
{
    vector<string> childrenNames;
    for (int i = 0; i < children.size(); i++)
    {
        childrenNames.push_back(node->children[i]->data);
        //cout << endl << Node->children[i]->data;
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
        Node* d = new Node(xml[next_Index]);
        children.emplace_back(d);
        next_Index++;
        if (xml[next_Index - 1][0] == '<') // enter recursion if not leaf node
        {
            d->buildTree(xml); // building tree depth first;
        }
    }
}

bool checkBody(string body, string word) {
    if (body.find(word) != string::npos)  //to see if it is found in the body
        return true;
    else
        return false;
}
string bodyText;

vector<string> Node::search(Node* root, string topic) {
    vector<string> postsList;
    searchForTopic(root, topic, postsList);
    return postsList;
}

void Node::searchForTopic(Node* root, string topic, vector<string>& postsList)
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
            if (checkBody(bodyText, topic)) //found the word in the body
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

        searchForTopic(root->children[i], topic, postsList);


    }
}
string Node::createJSON(Node* node)
{
    //int count_tabs = 2;
    int count;
    string json = "{\n";
    json += " \"" + node->data.substr(1, node->data.length() - 2) + "\": {";
    xmltojson(node,nullptr, json, 2);
    json += "}";
    return json;
}
void Node::xmltojson(Node* node,Node* parent, string& json, int level) {
    
    bool foundRepeated = true;
    bool curlybracket = false;
    bool squarebracket = false;
    if (node == NULL) {
        level-=2;
        json += insert("\t", level);
        //cout << "}";
        return;
    }
    /* if(node->children[0]->children[0] ==NULL){ //it is a leaf
         json += insert(" ", level);
         json+= children[0]->data;
     }
     */
    for (int i = 0; i < node->children.size(); i++)
    {
       vector<Node*>childrenlist;

        if (node->children.size() > 1) {
            
            if (node->children[0]->data.compare(node->children[1]->data) == 0)
            {
                //if node has siblings with similar names
                if (foundRepeated && i == 0) { 
                    json += "\n";
                    json += insert("\t", level);
                    json += "\"" + node->children[i]->data.substr(1, node->children[i]->data.length() - 2) + "\":";
                    json += "[\n";
                    squarebracket = true;
                    if (node->children[i]->children.size() > 1)
                    {
                        json += insert("\t", level);
                        json += "{\n";
                        curlybracket = true;
                    }
                    /*json += insert("\t", level);
                    json += "{\n";*/
                    
                    level++;

                }
            }
            else {
                if (node->children[i]->children.size() > 1) {
                    json += insert("\t", level);
                    json += "\"" + node->children[i]->data.substr(1, node->children[i]->data.length() - 2) + "\": ";
                    json += " {";
                    curlybracket = true;
                    level++;
                }
                else {
                    json += insert("\t", level);
                    json += "\"" + node->children[i]->data.substr(1, node->children[i]->data.length() - 2) + "\": ";
                    level++;
                }
                
            }
        }
        
        
        else if (node->children[i]->children.size() == 0) //leaf node
        { 
            if (i == node->children.size() - 1) {
                json += "\"" + node->children[i]->data + "\",\n";
            }
            else {
                json += "\"" + node->children[i]->data + "\"\n";
            }
           
            
            
        }
        else
        {
            json += "\n";
            json += insert("\t", level);
            json += "\"" + node->children[i]->data.substr(1, node->children[i]->data.length()-2 ) + "\":";
            json += "{\n";
            json += insert("\t", level);
            curlybracket = true;
            level++;
            
        }
        
        foundRepeated = false;
        //cout<<json;
        xmltojson(node->children[i],node, json, level);
        level--;
        if (curlybracket) {
            json += insert("\t", level);
            json += "}\n";
            curlybracket = false;
        }
        if(squarebracket) 
        {
            json += insert("\t", level);
            json += "]\n";
            squarebracket = false;
        }
    }


}

vector<string> Node::getPosts() {
    return postsList;
}
