#include "operations.h"
string minify(string test){
    test.erase(remove(test.begin(), test.end(), ' '), test.end());
    test.erase(remove(test.begin(), test.end(), '\n'), test.end());
    return test;
}
