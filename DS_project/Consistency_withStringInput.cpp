#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

using namespace std;

vector <string> Consistency (string input_stream){
    int end_subStr = 0;
    stack<pair<string, int>> st;
    int line = 1;
    string tag;
    string close_tag;
    bool flag_error;
    stack<pair<string, int>> error_stack;
    vector <int > output ;
    vector <string>  Errors;
    istringstream iss(input_stream);
    string str;

    while (getline(iss, str)) {

        int start_subStr = str.find('<', end_subStr);
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

vector <string> correction (string str )
{



}


int main() {
    string test1 = "<users>\n<user> 1 </id> <name> heba ayman <posts><post><body>ff </body><topics>\n<topic>\neconom\n</topic\n<topic>\neconomy\n</topic>\n</posts>\n<followers>\n<follower>\n2\n</id>\n</follower>\n</followers>\n</user>\n</users>";
    vector <string > test ;

    test=Consistency(test1);

    int g =0;
    while (g<test.size()) {
        cout << test.at(g);
        g++;
    }
    return 0;
}
