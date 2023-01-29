#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void checker(string str,string tag,int start_subStr , int end_subStr,bool flag_error, int line , stack<pair<string,int>> stack ) ;

vector <string> Consistency (string str){
    int end_subStr = 0;
    stack<pair<string, int>> st;
    int line = 1;
    string tag;
    string close_tag;
    bool flag_error;
    stack<pair<string, int>> error_stack;
    vector <int > output ;

    while (getline(cin, str)) {

        int start_subStr = str.find('<', end_subStr);
        end_subStr = str.find('>', end_subStr + 1);
        tag = str.substr(start_subStr + 1, end_subStr - start_subStr - 1);
        flag_error = (tag.find('<') != string::npos || tag.find('>') != string::npos || end_subStr == -1);

        /*checking if any of token is missed*/
        if ((start_subStr == -1 && end_subStr != -1) || (start_subStr != -1 && end_subStr == -1)) {
            cout << "Missing token in line: " << line << endl;
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
                cout << "Missing token in line: " << line << endl;

            } else {
                cout << "Missing token in line: " << line << endl;
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
                        cout << "Missing opening tag -> " << close_tag << endl;
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
                cout << "Missing token in line: " << line << endl;
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
                    cout << "Missing token in line: " << line << endl;

                } else {
                    cout << "Missing token in line: " << line << endl;
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
                            cout << "Missing opening tag -> " << close_tag << endl;
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

    vector <string>  Errors;
//   if flag == true;

    while (!error_stack.empty()) {

        Errors.push_back("Missing closing tag -> " + error_stack.top().first + " in line: " + to_string(error_stack.top().second)+"\n");
        error_stack.pop();
    }
    int g =0;
    while (g<Errors.size()) {
        cout << Errors.at(g);
        g++;
    }
    return Errors;

    while (!st.empty()) {

        cout << "line: " << st.top().second;
        cout << "  The top of the stack in is : " << st.top().first << endl;
        st.pop();
    }
}

vector <string> correction (string str )
{
    


}




int main() {
    string str;
    freopen("sample.in", "r", stdin);

    Consistency(str);





    return 0;
}





