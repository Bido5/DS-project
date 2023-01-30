#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;


vector <string> Consistency (string str){
    int end_subStr = 0;
    int start_subStr=0;
    stack<pair<string, int>> st;
    int line = 1;
    string tag;
    string close_tag;
    bool flag_error;
    stack<pair<string, int>> error_stack;
    vector <string>  Errors;
//    istringstream iss(input_stream);
//    string str;

    while (getline(cin, str)) {

        start_subStr = str.find('<', end_subStr);
        end_subStr = str.find('>', end_subStr + 1);
        tag = str.substr(start_subStr + 1, end_subStr - start_subStr - 1);
        flag_error = (tag.find('<') != string::npos || tag.find('>') != string::npos || end_subStr == -1);

        /*checking if any of token is missed*/
        if ((start_subStr == -1 && end_subStr != -1) || (start_subStr != -1 && end_subStr == -1)) {
           // cout << "Missing token in line: " << line << endl;
            Errors.push_back("Missing token in line: " +to_string(line)+ "\n");
            start_subStr = 0, end_subStr = 0;
            line++;
            continue;
        }

        if ((str[start_subStr]) == '<' && str[start_subStr + 1] != '/') {
            if (!flag_error)
                st.push({(tag), (line)});
            else if ((flag_error && tag.find('<') != string::npos) && end_subStr != -1 &&
                     tag[tag.find('<') + 1] != '/') {
                st.push({tag.substr(tag.find('<') + 1, end_subStr - start_subStr - 1), (line)});
               // cout << "Missing token in line: " << line << endl;
                Errors.push_back("Missing token in line: " +to_string(line)+ "\n");

            } else {
              //  cout << "Missing token in line: " << line << endl;
                Errors.push_back("Missing token in line: " +to_string(line)+ "\n");
            }
        }
        if ((str[start_subStr]) == '<' && str[start_subStr + 1] == '/') {

            close_tag = str.substr(start_subStr + 2, end_subStr - start_subStr - 2);

            if (!st.empty()) {

                if ((st.top().first != close_tag)) {
                    while (!st.empty())
                    {
                        if((st.top().first != close_tag) ) {
                            error_stack.push(st.top());
                            st.pop();
                        }
                        else
                            break;

                    }
                    if (st.empty())
                    {
                        Errors.push_back("Missing opening tag for -> " + close_tag +" in line :"+ to_string(line)+ "\n");
                        while (!error_stack.empty()) {
                            st.push(error_stack.top());
                            error_stack.pop();
                        }
                    }
                }

                if ((st.top().first == close_tag)) {
                    st.pop();
                }
            }
        }

        while (start_subStr > 0 && end_subStr > 0) {
            start_subStr = str.find('<', end_subStr);
            end_subStr = str.find('>', end_subStr + 1);

            tag = str.substr(start_subStr + 1, end_subStr - start_subStr - 1);
            flag_error = (tag.find('<') != string::npos || tag.find('>') != string::npos || end_subStr == -1);

            if ((start_subStr == -1 && end_subStr != -1) || (start_subStr != -1 && end_subStr == -1)) {
                Errors.push_back("Missing token in line: " + to_string(line) + "\n");
                start_subStr = 0, end_subStr = 0;
                line++;
                continue;

            }

            if ((str[start_subStr]) == '<' && str[start_subStr + 1] != '/') {
                if (!flag_error)
                    st.push({(tag), (line)});
                else if ((flag_error && tag.find('<') != string::npos) && end_subStr != -1 &&
                         tag[tag.find('<') + 1] != '/') {
                    st.push({tag.substr(tag.find('<') + 1, end_subStr - start_subStr - 1), (line)});
                    //cout << "Missing token in line: " << line << endl;
                    Errors.push_back("Missing token in line: " + to_string(line) + "\n");

                } else {
                    //cout << "Missing token in line: " << line << endl;
                    Errors.push_back("Missing token in line: " + to_string(line) + "\n");
                }
            }
            if ((str[start_subStr]) == '<' && str[start_subStr + 1] == '/') {

                close_tag = str.substr(start_subStr + 2, end_subStr - start_subStr - 2);

                if (!st.empty()) {

                    if ((st.top().first != close_tag)) {
                        while (!st.empty())
                        {
                            if((st.top().first != close_tag) ) {
                                error_stack.push(st.top());
                                st.pop();
                            }
                            else
                                break;
                        }
                        if (st.empty())
                        {
                            Errors.push_back("Missing opening tag for -> "  + close_tag +" in line :"+ to_string(line)+"\n");
                            while (!error_stack.empty()) {
                                st.push(error_stack.top());
                                error_stack.pop();
                            }
                        }
                    }

                    if ((st.top().first == close_tag)) {
                        st.pop();
                    }
                }
            }
        }
        start_subStr = 0, end_subStr = 0;
        line++;
    }

    while (!error_stack.empty()) {

        Errors.push_back("Missing closing tag -> " + error_stack.top().first + " in line: " + to_string(error_stack.top().second)+"\n");
        error_stack.pop();
    }

    return Errors;

}

//string correction (string str )
//{
//    string op;
//    vector <string> errorsPos;
//    errorsPos= Consistency (str);
//   istringstream iss(errorsPos);
//    string str_error;
//
//    while (getline(cin, str)) {
//
//
//
//        op+=str;
//    }
//}

vector<string> fixTags(vector<string> &xml) {
    stack<string> stk;
    vector<string> result;

    for (int i = 0; i < xml.size(); i++) {
        string line = xml[i];

        // Check if the line is an opening tag
        if (line[0] == '<' && line[1] != '/') {
            stk.push(line.substr(1, line.size() - 2));
        } else if (line[0] == '<' && line[1] == '/') {
            // Check if the closing tag matches the top of the stack
            string closingTag = line.substr(2, line.size() - 3);
            if (stk.empty() || stk.top() != closingTag) {
                // If not, add the missing opening tag to the result
                result.push_back("<" + closingTag + ">");
            } else {
                stk.pop();
            }
        }
        result.push_back(line);
    }

    // Add any remaining opening tags to the end of the result
    while (!stk.empty()) {
        result.push_back("</" + stk.top() + ">");
        stk.pop();
    }

    return result;
}


vector<string> stringToVector(const string& input)
{
    vector<string> result;
    stringstream inputStream(input);
    string line;

    while (getline(inputStream, line))
    {
        result.push_back(line);
    }

    return result;
}

string correct_xml(const std::string& xml) {
    stack<std::string> tags;
    string result;

    int start = 0;
    int end = 0;
    while (end < xml.size()) {
        start = xml.find('<', end);
        if (start == std::string::npos) break;
        result += xml.substr(end, start - end);
        end = xml.find('>', start);
        if (end == std::string::npos) break;
        string tag = xml.substr(start + 1, end - start - 1);
        if (tag[0] != '/') {
            tags.push(tag);
            result += "<" + tag + ">";
        } else {
            string open_tag = tags.top();
            tags.pop();
            if (open_tag != tag.substr(1)) {
                result += "<" + open_tag + "></" + open_tag + ">";
            }
        }
        end++;
    }

    while (!tags.empty()) {
        std::string open_tag = tags.top();
        tags.pop();
        result += "<" + open_tag + "></" + open_tag + ">";
    }

    return result;
}


int main() {

//// Testing of consistency
    string str;
    freopen("sample_1.xml", "r", stdin);
   // string test1 = "<users>\n<user> 1 </id> <name> heba ayman <posts><post><body>ff </body><topics>\n<topic>\neconom\n</topic\n<topic>\neconomy\n</topic>\n</posts>\n<followers>\n<follower>\n2\n</id>\n</follower>\n</followers>\n</user>\n</users>";
    vector <string > test ;
    test=Consistency(str);
    int g =0;
    while (g<test.size()) {
        cout << test.at(g);
        g++;
    }
    ////

////trying to test correction code

  //  string xml = "<users>\n <user>\n <id>1</id>\n <name>Ahmed Ali</name>\n <posts>\n\n <body>\n Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n </body>\n\n <topic>\n economy\n </topic>\n <topic>\n finance\n </topic>\n </topics>\n </post>\n <post>\n <body>\n Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n </body>\n <topics>\n <topic>\n solar_energy\n </topic>\n </topics>\n </post>\n </posts>\n <followers>\n <follower>\n <id>2</id>\n </follower>\n <follower>\n <id>3</id>\n </follower>\n </followers>\n </user>";

 //   vector<string> lines = stringToVector(xml);
  //  string  out=correct_xml(xml);

   // vector<string> input= xmlToVector("sample_1.xml");
   //vector<string> correctedXml = fixTags(input);

//    for (string line : correctedXml) {
//        cout << line << endl;
//    }
////
    return 0;
}

