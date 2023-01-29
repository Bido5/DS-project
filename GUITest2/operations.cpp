#include "operations.h"
#include "File.h"

string minify(vector<string> text)
{
    string minified = "";
    /*
    test.erase(remove(test.begin(), test.end(), '  '), test.end());
    test.erase(remove(test.begin(), test.end(), '\t'), test.end());
    test.erase(remove(test.begin(), test.end(), '\r\n'), test.end());
    return test;
    */

    for (int i = 0; i < text.size(); i++) {
        minified += text[i];
    }
    return minified;

}
/*
 * compress: iterate thro the string
 * single characters a-z insert 3ady
 * check the next charactter and insert this combination
 * as the itr moves, check if the character is the comb.. check if the next achar (comb) is also in the table. 2 char exist, output to compressed file... insert a 3rd char aw nfks
 *
 *
 * */
/*
vector<int> compress(string text, HashMaphash)
{
    vector<int> result = {};
    text = minify(text);
    for (int i = 0; i < text.length() - 1; i += 2)
    {
        string str = "";
        str += text[i];
        str += text[i + 1];
        hash->insert(str);
        result.push_back(hash->hashString(str));
    }
    hash->printHash();
    for (int i = 0; i < result.size(); ++i)
    {
        if (result[i] != 0)
        {
            cout << i << ": " << result[i] << " " << endl;
        }
    }

    cout << "compression size: " << result.size() << endl;
    return result;
}
*/
// hash->printHash();
// for (int i = 0; i < result.size(); ++i) {
//   if(result[i] != 0){
//     cout<< i << ": "<<result[i]<< " " << endl;
// }
// }
string decompress(vector<int> compressed, HashMap* hash)
{
    string xml = "";
    for (int i = 0; i < compressed.size(); i++)
    {
        xml += hash->searchByKey(compressed[i]);
    }
    return xml;
}
