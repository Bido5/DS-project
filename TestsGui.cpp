// TestsGui.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

vector <string> to_array(string xml);

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

    void addFollower(int follower)
    {
        followers.push_back(follower);
    }

    string print() {

        string out = name + " (" + to_string(id) + "): {";
        for (int i = 0; i < followers.size(); i++) {
            out += to_string(followers[i]) + ", ";
        }
        out += "}";

        return out;
    }

    ~User()
    {
    }

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

    void build_graph(vector<string> elements) {
        int current;
        int i = 0;

        for (i = 0; i < elements.size(); i++) {

            if (elements[i] == "<user>") {
               // current = customAtoi(elements[i + 2]);
                current = stoi(elements[i + 2]);
                users[current] = new User(current, elements[i + 5]);
                i += 6;
            }
            else if (elements[i] == "<followers>") {
                i++;
                while (elements[i] != "</followers>") {
                    if (elements[i] == "<id>") {
                        users[current]->addFollower(stoi(elements[i + 1]));
                        i += 2;
                    }
                    i++;
                }
            }

        }
    }
    /*
    void DFSUtil(int u, vector<int> adj[], map <int ,bool>& visited)
    {
        visited[u] = true;
        cout << u << " ";
        for (int i = 0; i < adj[u].size(); i++)
            if (visited[adj[u][i]] == false)
                DFSUtil(adj[u][i], adj, visited);
    }
    */


};




int main()
{
    string s = "<users>\r\n<user>\r\n<id>1 </id >\r\n<name>Ahmed Ali</name>\r\n<posts>\r\n<post>\r\n<body>\r\nLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\r\n</body>\r\n<topics>\r\n<topic>\r\neconomy\r\n</topic>\r\n<topic>\r\nfinance\r\n</topic>\r\n</topics>\r\n</post>\r\n<post>\r\n<body>\r\nLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\r\n</body>\r\n<topics>\r\n<topic>\r\nsolar_energy\r\n</topic>\r\n</topics>\r\n</post>\r\n</posts>\r\n<followers>\r\n<follower>\r\n<id>2 </id>\r\n</follower>\r\n<follower>\r\n<id>3 </id>\r\n</follower>\r\n</followers>\r\n</user>\r\n<user>\r\n<id>2 </id>\r\n<name>Yasser Ahmed</name>\r\n<posts>\r\n<post>\r\n<body>\r\nLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\r\n</body>\r\n<topics>\r\n<topic>\r\neducation\r\n</topic>\r\n</topics>\r\n</post>\r\n</posts>\r\n<followers>\r\n<follower>\r\n<id>1 </id>\r\n</follower>\r\n</followers>\r\n</user>\r\n<user>\r\n<id>3 </id>\r\n<name>Mohamed Sherif</name>\r\n<posts>\r\n<post>\r\n<body>\r\nLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\r\n</body>\r\n<topics>\r\n<topic>\r\nsports\r\n</topic>\r\n</topics>\r\n</post>\r\n</posts>\r\n<followers>\r\n<follower>\r\n<id>1 </id>\r\n</follower>\r\n</followers>\r\n</user>\r\n<users>";
    vector <string> elements = to_array(s);
    
    Graph* graph = new Graph(elements);

    for (auto it : graph->users) {
        cout << it.second->print() << endl;
    }
}

vector <string> to_array(string xml) {
    vector <string> out;

    for (int i = 0; i < xml.size(); i++) {
        string element;
        switch (xml[i]) {
        case '<':
            while (i < xml.size()) {
                element.push_back(xml[i]);
                if (xml[i] == '>')
                    break;
                i++;
            }
            out.push_back(element);
            break;
        case ' ':
        case '\t':
        case '\r':
        case '\n':
            continue;
            break;
        default:
            while (i < xml.size() && xml[i] < 127 && xml[i]>31) {
                if (xml[i] == '<') {
                    i--;
                    break;
                }
                element.push_back(xml[i++]);
            }
            out.push_back(element);
        }
    }

    return out;
}




