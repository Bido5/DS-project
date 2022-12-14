#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class File
{
    private:
        fstream xfile;
        vector <string> elements;
        string fileName = "resources/sample.txt";


    public:
        File();
        virtual ~File();
        void toArray();
        vector <string> getElements();
};

#endif // FILE_H
