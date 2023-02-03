#include"File.h"
#include <string>


File::File(string fileName)
{
    //ctor
    this->fileName = fileName;
    toArray();
}

File::~File()
{
    //dtor
}
void File::toArray() {
    vector <string> temp;
    string line;
    int space = 0;
    bool text = false;
    size_t lsize;

    xfile.open(fileName);
    while (!xfile.eof()) {
        getline(xfile, line);
        if (line == "")
            continue;
        for (int i = 0; i < line.size(); i++) {
            string s;
            switch (line[i]) {
            case '<':
                while (i < line.size()) {
                    s.push_back(line[i]);
                    if (line[i] == '>')
                        break;
                    i++;
                }
                temp.push_back(s);
                break;
            case ' ':
            case '\t':
            case '\r':
            case '\n':
                continue;
                break;
            default:
                while (i < line.size() && line[i] < 127 && line[i]>31) {
                    if (line[i] == '<') {
                        i--;
                        break;
                    }
                    s.push_back(line[i++]);
                }
                temp.push_back(s);
            }
        }

    }
    
    elements = temp;

    xfile.close();
}
vector<string> File::getElements() {
    return elements;
}
void File::saveFile(string text) {
    //xfile.open(fileName);
    xfile.open(fileName, std::ofstream::out | std::ofstream::trunc);
    xfile << text;
    xfile.close();

    toArray();
}

string File::exportFile()
{
    string line;
    string text = "";

    xfile.open(fileName);
    while (!xfile.eof()) {
        getline(xfile, line);
        text += line;
        text += "\n";
    }
  
    xfile.close();
    return text;
}



