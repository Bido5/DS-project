#pragma once

#ifndef DS_PROJECT_OPERATIONS_H
#define DS_PROJECT_OPERATIONS_H
#include "algorithm"
#include <cstring>
#include <iostream>
#include <stack>
#include "fstream"
#include "sstream"
#include "HashMap.h"
#include "vector"



using namespace std;
string minify(string text);
string minify(vector <string> text);
//vector<int> compress(string text, HashMaphash);
string decompress(vector<int> compressed, HashMap* hash);
vector <string> to_array(string xml);
//vector <string> Consistency(string input_stream);
#endif // DS_PROJECT_OPERATIONS_H
