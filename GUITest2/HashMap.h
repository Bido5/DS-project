#pragma once

#include "iostream"
#include "list"
#include <cmath>
#include "cstring"

using namespace std;
#ifndef DS_PROJECT_HASHMAP_H
#define DS_PROJECT_HASHMAP_H
#define HASH_SIZE 128

class HashMap {
private:

    string table[HASH_SIZE]; //
    int idx; // key is used to index the array
public:
    static int counter;

    void printHash();

    int hashString(char value);

    void insert(char key, string value);

    string searchByKey(char key);
};
#endif //DS_PROJECT_HASHMAP_H
