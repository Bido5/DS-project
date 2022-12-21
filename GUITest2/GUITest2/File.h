#pragma once
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
    string fileName;


    public:
    File(string fileName);
    virtual ~File();
    void toArray();
    vector <string> getElements();
    
};

#endif // FILE_H

