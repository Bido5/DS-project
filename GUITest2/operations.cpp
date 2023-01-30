#include "operations.h"
#include "File.h"


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

string minify(string text)
{
    string minified = "";
    vector<string> elemnets = to_array(text);

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

//vector <string> Consistency(string input_stream) {
//    int end_subStr = 0;
//    stack<pair<string, int>> st;
//    int line = 1;
//    string tag;
//    string close_tag;
//    bool flag_error;
//    stack<pair<string, int>> error_stack;
//    vector <int > output;
//    vector <string>  Errors;
//    istringstream iss(input_stream);
//    string str;
//
//    while (getline(iss, str)) {
//
//        int start_subStr = str.find('<', end_subStr);
//        end_subStr = Math.abs(str.find('>', end_subStr + 1));
//        tag = str.substr(start_subStr + 1, abs(end_subStr - start_subStr - 1));
//        flag_error = (tag.find('<') != string::npos || tag.find('>') != string::npos || end_subStr == -1);
//
//        /*checking if any of token is missed*/
//        if ((start_subStr == -1 && end_subStr != -1) || (start_subStr != -1 && end_subStr == -1)) {
//            // cout << "Missing token in line: " << line << endl;
//            Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//            start_subStr = 0, end_subStr = 0;
//            line++;
//            continue;
//        }
//
//        if ((str[abs(start_subStr)]) == '<' && str[start_subStr + 1] != '/') {
//            if (!flag_error)
//                st.push({ (tag), (line) });
//            else if ((flag_error && tag.find('<') != string::npos) && end_subStr != -1 &&
//                tag[tag.find('<') + 1] != '/') {
//                st.push({ tag.substr(tag.find('<') + 1, end_subStr - start_subStr - 1), (line) });
//                // cout << "Missing token in line: " << line << endl;
//                Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//
//            }
//            else {
//                //  cout << "Missing token in line: " << line << endl;
//                Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//            }
//        }
//        if ((str[abs(start_subStr)]) == '<' && str[start_subStr + 1] == '/') {
//
//            close_tag = str.substr(start_subStr + 2, abs(end_subStr - start_subStr - 2));
//
//            if (!st.empty()) {
//
//                if ((st.top().first != close_tag)) {
//                    while (!st.empty())
//                    {
//                        if ((st.top().first != close_tag)) {
//                            error_stack.push(st.top());
//                            st.pop();
//                        }
//                        else
//                            break;
//
//                    }
//                    if (st.empty())
//                    {
//                        Errors.push_back("Missing opening tag for -> " + close_tag + " in line :" + to_string(line) + "\n");
//                        while (!error_stack.empty()) {
//                            st.push(error_stack.top());
//                            error_stack.pop();
//                        }
//                    }
//                }
//
//                if ((st.top().first == close_tag)) {
//                    st.pop();
//                }
//            }
//        }
//
//        while (start_subStr > 0 && end_subStr > 0) {
//            start_subStr = str.find('<', end_subStr);
//            end_subStr = str.find('>', end_subStr + 1);
//
//            tag = str.substr(start_subStr + 1, abs(end_subStr - start_subStr - 1));
//            flag_error = (tag.find('<') != string::npos || tag.find('>') != string::npos || end_subStr == -1);
//
//            if ((start_subStr == -1 && end_subStr != -1) || (start_subStr != -1 && end_subStr == -1)) {
//                Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//                start_subStr = 0, end_subStr = 0;
//                line++;
//                continue;
//
//            }
//
//            if ((str[abs(start_subStr)]) == '<' && str[start_subStr + 1] != '/') {
//                if (!flag_error)
//                    st.push({ (tag), (line) });
//                else if ((flag_error && tag.find('<') != string::npos) && end_subStr != -1 &&
//                    tag[tag.find('<') + 1] != '/') {
//                    st.push({ tag.substr(tag.find('<') + 1, end_subStr - start_subStr - 1), (line) });
//                    //cout << "Missing token in line: " << line << endl;
//                    Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//
//
//                }
//                else {
//                    //cout << "Missing token in line: " << line << endl;
//                    Errors.push_back("Missing token in line: " + to_string(line) + "\n");
//                }
//            }
//            if ((str[abs(start_subStr)]) == '<' && str[start_subStr + 1] == '/') {
//
//                close_tag = str.substr(start_subStr + 2, abs(end_subStr - start_subStr - 2));
//
//                if (!st.empty()) {
//
//                    if ((st.top().first != close_tag)) {
//                        while (!st.empty())
//                        {
//                            if ((st.top().first != close_tag)) {
//                                error_stack.push(st.top());
//                                st.pop();
//                            }
//                            else
//                                break;
//                        }
//                        if (st.empty())
//                        {
//                            Errors.push_back("Missing opening tag for -> " + close_tag + " in line :" + to_string(line) + "\n");
//                            while (!error_stack.empty()) {
//                                st.push(error_stack.top());
//                                error_stack.pop();
//                            }
//                        }
//                    }
//
//                    if ((st.top().first == close_tag)) {
//                        st.pop();
//                    }
//                }
//            }
//        }
//        start_subStr = 0, end_subStr = 0;
//        line++;
//    }
//
//    while (!error_stack.empty()) {
//
//        Errors.push_back("Missing closing tag -> " + error_stack.top().first + " in line: " + to_string(error_stack.top().second) + "\n");
//        error_stack.pop();
//    }
//
//    return Errors;
//
//}
/*
string process_string(const string& input) {
    istringstream iss(input);
    string str;
    return str;
}
*/
