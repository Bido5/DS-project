#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class User
{
public:
    //  attributes
    string name;
    int id;
    vector<int> followers;

    // methods
    User() {
        name = "NULL";
        id = 0;
    }
    User(int id, string name) {
        this->id = id;
        this->name = name;
    }
  
    void addFollower(int follower);
    //checks if a user exists in this users followers list
    bool exists(int val);
    string print();

    ~User()
    {
    }

private:
    bool binarySearch(int l, int r, int val);
    friend class graph;
};

class Graph {
public:
    map <int, User*> users;

    Graph() {

    }
    Graph(vector<string> elements) {
        build_graph(elements);
    }

    void build_graph(vector<string> elements);
    // gets most active user
    User* getActive();
    // gets most influential user
    User* getInfluential();
};


