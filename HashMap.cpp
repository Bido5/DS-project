//
// Created by Abdullah Ibrahim on 05/12/2022.
//

#include "HashMap.h"
 bool HashMap::isEmpty() {
    int sum =0;
    for(int i=0; i<hashSize; i++){
        sum += table[i].size();
    }
    if(sum == 0) return true;
     return false;
}

void HashMap::insert(int key, string value) {

}

string HashMap::searchByKey(int key) {

}

int HashMap::searchByValue(string value) {

}

int HashMap::hashString(string str) {
    int sum = 0;
    for(int i =0; i<(int)str.size(); ++i){
        sum += sum * 26 + str[i] - 'a';
    }
    return sum % hashSize;
}