#include "operations.h"
#include "Adapter.h"



vector <string> XmlOp::to_array(string xml) {
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

queue <string> XmlOp::to_queue(string xml) {
    queue <string> out;

    for (int i = 0; i < xml.size(); i++) {
        string element = "";
        switch (xml[i]) {
        case '<':
            while (i < xml.size()) {
                element += xml[i];
                if (xml[i] == '>')
                    break;
                i++;
            }
            out.push(element);
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
                element += xml[i++];
            }
            out.push(element);
        }
    }

    return out;
}


string XmlOp::minify(vector<string> text)
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

string XmlOp::minify(string text)
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
string XmlOp::decompress(vector<int> compressed, HashMap* hash)
{
    string xml = "";
    for (int i = 0; i < compressed.size(); i++)
    {
        xml += hash->searchByKey(compressed[i]);
    }
    return xml;
}

vector <pair<string, int>> XmlOp::Consistency(string input) {
    stack <pair<string, int>> tags;
    vector <pair<string, int>> errors;
    vector <string> elements = XmlOp::to_array(input);

    for (int i = 0; i <elements.size(); i++) {
        if (elements[i][0] == '<') {
            if (elements[i][1] == '/') {
                /*
                auto top = tags.top();
                string tagName = top.first.substr(1, top.first.size() - 2);
                if (tagName != elements[i].substr(2, elements[i].size() - 3))
                    errors.push_back(pair<string, int>(elements[i], i+1));
                else
                    tags.pop();
                */
                stack <pair<string, int>> fErrors = tagExists(tags, elements[i].substr(2, elements[i].size() - 3), i + 1);
                while (!fErrors.empty()) {
                    errors.push_back(fErrors.top());
                    fErrors.pop();
                }
            }
            else
                tags.push(pair<string, int>(elements[i], i + 1));
        }
        else
            continue;
    }
    while (!tags.empty()) { 
        errors.push_back(tags.top());
        tags.pop();
    }

    return errors;
}

stack < pair < string,int>> XmlOp::tagExists(stack <pair<string, int>>& tags, string cmp,int line) {
    bool found = false;
    stack <pair<string, int>> errors;
    while (!tags.empty()) {
        auto top = tags.top();
        string tagName = top.first.substr(1, top.first.size() - 2);
        if (tagName != cmp) {
            errors.push(tags.top());
            tags.pop();
        }
        else {
            found = true;
            tags.pop();
            break;
        }
    }

    if (!found) {
        while (!errors.empty()) {
            tags.push(errors.top());
            errors.pop();
        }
        errors.push(pair<string, int>("</" + cmp + ">", line));
    }

    return errors;
}


string XmlOp::printErrors(string input) {
    vector <pair<string, int>> errors = Consistency(input);
    string out = "";

    for (auto it : errors) {
        if (it.first[1] == '/')
            out += "Missing opening tag for: ";
        else
            out += "Missing closing tag for: ";

        out = out + it.first + " in line(";
        string line = Adapter::to_unmanaged(it.second.ToString());
        out = out + line + ")\r\n";
    }
    return out;
}

/*
string process_string(const string& input) {
    istringstream iss(input);
    string str;
    return str;
}
*/

string XmlOp::insert_tabs(char s, int n)
{
    string insert_tabs;
    for (int i = 0; i < n; i++)
        insert_tabs += s;

    return insert_tabs;
}

string XmlOp::format_xml(string file)
{
    queue <string> q;
    string x = "";
    string s = "";
    string next;
    long long i = 0, count;//count for the number of characters in tags and data
    int count_tabs = 0;  //count for the number of tabs

    q = XmlOp::to_queue(file);


    while (!q.empty()) {
        x = q.front();
        q.pop();
        if (x[0] == '<') {
            //closing tags
            if (x[1] == '/') {
                count_tabs--;
                s += insert_tabs('\t', count_tabs);
                s += x;
                s += "\r\n";
            }
            //opening tag
            else {
                s += insert_tabs('\t', count_tabs);
                s += x;
                count_tabs++;
                s += "\r\n";
            }
        }
        //data
        else
        {
            s += insert_tabs('\t', count_tabs);
            s += x;
            s += "\r\n";
        }
    }
    return s;
}

string XmlOp::correct(vector <pair<string, int>> errors, string s) {
    //stack<string> sElements;
    string out = "";
    vector <string> elements = to_array(s);
    map <int, string> errorl;
    for (auto i : errors) 
        errorl[i.second] = i.first;
    
    int j = 0;


    for (int i = 0; i<elements.size(); i++) {
        if (errorl[i + 1] == "") 
            out += elements[i];
        else {
            if (errorl[i + 1][1] == '/') {
                out += "<" + elements[i].substr(2, elements.size() - 2);
                out += elements[i];
            }
            else {
                out += elements[i];
                out += "</" + elements[i].substr(1, elements[i].size() - 1);
            }
        }
            
    }
    return out;

}
