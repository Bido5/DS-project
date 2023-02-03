#include "User.h"

void User::addFollower(int follower)
{
    followers.push_back(follower);
}
bool User::exists(int val) {
    return binarySearch(0, followers.size() - 1, val);
}
string User::print() {

    string out = name + " (" + to_string(id) + "): {";
    for (int i = 0; i < followers.size(); i++) {
        out += to_string(followers[i]) + ", ";
    }
    out += "}";

    return out;
}
bool User::binarySearch(int l, int r, int val)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (followers[mid] == val)
            return true;

        if (followers[mid] > val)
            return binarySearch(l, mid - 1, val);


        return binarySearch(mid + 1, r, val);
    }


    return false;
}
void Graph::build_graph(vector<string> elements) {
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
User* Graph::getActive() {
    User* influential = nullptr;

    for (auto it : users) {
        if (influential == nullptr) {
            influential = it.second;
        }
        else {
            if (influential->followers.size() < it.second->followers.size())
                influential = it.second;
        }
    }

    return influential;

}
User* Graph::getInfluential() {
    User* active = nullptr;
    map <int, int> following;

    for (auto it : users) {
        for (auto p : it.second->followers) {
            following[p]++;
        }
    }


    for (auto it : following) {
        if (active == nullptr) {
            active = users[it.first];
        }
        else {
            if (it.second > following[active->id])
                active = users[it.first];
        }
    }

    return active;

}
