//
// Created by Abdullah Ibrahim on 05/12/2022.
//
#include "iostream"
#include "list"
#include <cmath>
#include "cstring"

using namespace std;
#ifndef DS_PROJECT_HASHMAP_H
#define DS_PROJECT_HASHMAP_H
#define HASH_SIZE 4096

class HashMap {
private:
    //static const int hashSize = 4096; // 2^12 // optimize size
    //list<pair<string, int>> table[hashSize];
    string table[HASH_SIZE]; // to store string combinations used to compress data
    int key; // key is used to index the array
public:
    static int counter;
    int hashString(string value); // to get an index from the combination of letters and index is used in compression
    void insert(string value); // to insert a combination of letters into table
    void insertTag(string tag); // to insert tag name directly to be compressed as a whole word
    string searchByKey(int key); // to get the combination of letters when decompressing
    // int searchByValue(string value); // for compression
    void printHash();

};
#endif //DS_PROJECT_HASHMAP_H
