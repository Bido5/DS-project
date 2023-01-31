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
#include <queue>
#include "File.h"



using namespace std;

static class XmlOp {
public:
	static queue <string> to_queue(string xml);
	static string minify(string text);
	static string minify(vector <string> text);
	//vector<int> compress(string text, HashMaphash);
	static string decompress(vector<int> compressed, HashMap* hash);
	static vector <string> to_array(string xml);
	static string format_xml(string file);
private:
	static string XmlOp::insert_tabs(char s, int n);
	//vector <string> Consistency(string input_stream);
};
#endif // DS_PROJECT_OPERATIONS_H
