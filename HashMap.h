//
// Created by Abdullah Ibrahim on 05/12/2022.
//
#include "iostream"
#include "list"
#include "math.h"
#include "cstring"

using namespace std;
#ifndef DS_PROJECT_HASHMAP_H
#define DS_PROJECT_HASHMAP_H


class HashMap {
private:
  static const int hashSize = 4096; // 2^12 // optimize size
  list<pair<string, int>> table[hashSize];

public:
    bool isEmpty();
      // should figure out how to use the key/value interchangeable
    void insert(int key, string value); // hanshoof hn3ml insertion ezay
    string searchByKey(int key); // for decpmpression
    int searchByValue(string value); // for compression
    int hashString(string str); // use this
    int hashNum(); //fakes should i send hashSize or no?
};
#endif //DS_PROJECT_HASHMAP_H
