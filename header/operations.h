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
#include "Huffman.h"
#include "vector"
#include <queue>
#include "File.h"
#include <map>



using namespace std;

static class XmlOp {
public:
	static queue <string> to_queue(string xml);
	static string minify(string text);
	static string minify(vector <string> text);
	static string toBitStream(string text);
	static string decToBin(int n);
	static void removeExtraBits(string& s, int extra);
	static string toByteStream(string text);

	static void saveHeader(string& s, vector<pair<char, int>> vec);
	static vector<pair<char, int>> readHeader(string& s);

	static void compress(string text);
	static void decompress(string& compressedStr);

	static vector <string> to_array(string xml);
	static vector <pair<string, int>> Consistency(string input);
	static string printErrors(string input);
	static string correct(vector <pair<string, int>> errors, string s);


	// function to add indentations to xml
	static string format_xml(string file);
private:
	//Function to insert a string n times its used to insert tabs
	static string XmlOp::insert_tabs(char s, int n);
	static stack < pair < string, int>> tagExists(stack <pair<string, int>>& tags, string cmp, int line);


	//vector <string> Consistency(string input_stream);
};
#endif // DS_PROJECT_OPERATIONS_H