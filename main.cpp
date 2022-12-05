#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


int main()
{
    fstream xfile;
    string line;
    vector <string> elements;
    int space=0;
    bool text = false;
    int lsize;

    xfile.open("resources/sample.txt");
    while(!xfile.eof()){
        getline(xfile, line);
        lsize = line.size();
        space=0;
        text = false;
        for(int i=0; i<lsize-2; i+=4){
            if(line[i]==' ')
                    space+=4;
            else
                break;
        }

        if(!(line[space+1] == '/')){
            for(int i=space; i<lsize-3; i++){
                if(line[i]=='<')
                    i+=2;
                else if(line[i]=='>'){
                    elements.push_back(line.substr(space,i-space+1));
                    elements.push_back(line.substr(i+1,lsize-2*i+space-3));
                    elements.push_back(line.substr((lsize-2-i+space),i-space+2));
                    text = true;
                    break;
                }
        }
        if(!text){
            elements.push_back(line.substr(space,lsize-space));
        }
        }
    }
    xfile.close();
    elements.shrink_to_fit();
    for(int i=0; i<elements.size();i++)
        cout<<elements[i]<<endl;
}


