#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

// int count = 0;

// this class is used to build tree depth first after receiving them in a vector
// int next_Index = 1;
class Node
{
private:
    string data;
    vector<Node*> children;
    // int sizePerLevel;

public:
    Node(string data)
    {
        this->data = data;
    }
    string getData()
    {
        return this->data;
    }
    vector<Node*> getChildren()
    {
        return children;
    }

    vector<string> search(Node* root, string topic);
    void buildTree(vector<string> xml);
    void print(Node* root);
    void Traverse(Node* root);
    void searchForTopic(Node* root, string topic, vector<string>& postsList);
    vector<string> getPosts();

    void xmltojson(Node* node);
    void viewJson();
    vector<string> getChildren(Node* node);
};
