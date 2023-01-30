#include"File.h"
#include <string>


File::File(string fileName)
{
    //ctor
    this->fileName = fileName;
  
}

File::~File()
{
    //dtor
}
void File::toArray() {
    string line;
    int space = 0;
    bool text = false;
    size_t lsize;

    xfile.open(fileName);
    while (!xfile.eof()) {
        getline(xfile, line);
        lsize = line.size();
        space = 0;
        text = false;
        while(space < lsize - 2) {
            if (line[space] == ' ')
                space += 4;
            else if (line[space] == '\t')
                space += 1;
            else
                break;
        }

        if (!(line[space + 1] == '/')) {
            for (size_t i = space; i < lsize - 3; i++) {
                if (line[i] == '<')
                    i += 2;
                else if (line[i] == '>') {
                    elements.push_back(line.substr(space, i - space + 1));
                    elements.push_back(line.substr(i + 1, lsize - 2 * i + space - 3));
                    elements.push_back(line.substr((lsize - 2 - i + space), i - space + 2));
                    text = true;
                    break;
                }
            }
        }
        if (!text) {
            elements.push_back(line.substr(space, lsize - space));
        }

    }
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



