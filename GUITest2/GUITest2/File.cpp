#include "File.h"

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
    int lsize;

    xfile.open(fileName);
    while (!xfile.eof()) {
        getline(xfile, line);
        lsize = line.size();
        space = 0;
        text = false;
        for (int i = 0; i < lsize - 2; i += 4) {
            if (line[i] == ' ')
                space += 4;
            else if (line[i] == '\t')
                space += 1;
            else
                break;
        }

        if (!(line[space + 1] == '/')) {
            for (int i = space; i < lsize - 3; i++) {
                if (line[i] == '<')
                    i += 2;
                else if (line[i] == '>') {
                    elements.push_back(line.substr(space, i - space + 1));
                    cout << *(elements.end() - 1) << endl;
                    elements.push_back(line.substr(i + 1, lsize - 2 * i + space - 3));
                    cout << *(elements.end() - 1) << endl;
                    elements.push_back(line.substr((lsize - 2 - i + space), i - space + 2));
                    cout << *(elements.end() - 1) << endl;
                    text = true;
                    break;
                }
            }
            if (!text) {
                elements.push_back(line.substr(space, lsize - space));
                cout << *(elements.end() - 1) << endl;
            }
        }

    }
    xfile.close();
    /*
    elements.shrink_to_fit();
    for(int i=0; i<elements.size();i++)
        cout<<elements[i]<<endl;
        */
}

vector<string> File::getElements() {
    return elements;
}



