#include "operations.h"

string minify(string test) {
    test.erase(remove(test.begin(), test.end(), '  '), test.end());
    test.erase(remove(test.begin(), test.end(), '\n'), test.end());
    return test;
}
/*
 * compress: iterate thro the string
 * single characters a-z insert 3ady
 * check the next charactter and insert this combination
 * as the itr moves, check if the character is the comb.. check if the next achar (comb) is also in the table. 2 char exist, output to compressed file... insert a 3rd char aw nfks
 *
 *
 * */
void compress(string text){
    auto hash = new HashMap;
    vector<int> result = {};
    text = minify(text);
    for(pair<int,int> i (0,0); i.first< text.length()-1; i.first+=2){
        string str = "";
        str += text[i.first];
        str += text[i.first+1];
        hash->insert(str);
        result.push_back(hash->hashString(str));
        i.second++;
    }
    //hash->printHash();
    //for (int i = 0; i < result.size(); ++i) {
    //  if(result[i] != 0){
    //    cout<< i << ": "<<result[i]<< " " << endl;
    //}
    //}
    cout << "compression size: " <<result.size()<<endl;
}
