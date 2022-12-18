//
// Created by Abdullah Ibrahim on 05/12/2022.
//

#include "HashMap.h"
int HashMap::counter = 0;
int HashMap::hashString(string value)
{ // calculate key value for the list which is the compressed value
    int sum = 0;
    for (int i = 0; i < (int)value.size(); ++i)
    {
        sum = sum * 60 + value[i] - 'A';
    }
    return abs(sum + 286); // 286 bcz first 255 are ascii and reserving 30 places for tag names.
}

void HashMap::insert(string value)
{
    key = hashString(value);
    if (table[key].empty())
    {
        table[key] = value; // check is the content of array[i] is empty to insert a value
        counter++;
    }
}

void HashMap::insertTag(string tag)
{
    key = 256;
    for (int i = 0; i < 30; i++)
    {
        if (table[key] == tag)
        {
            cout << "tag exists" << endl;
            break;
        }
        else if (table[key].empty())
        {
            table[key] = tag;
            cout << "new tag inserted" << endl;
            break;
        }
        else
            key++;
        cout << "place not empty" << endl;
    }
}

string HashMap::searchByKey(int key)
{                      // used for decompression
    return table[key]; // returns the array content of this key
}

void HashMap::printHash()
{
    for (int i = 0; i < HASH_SIZE; i++)
    {
        if (!table[i].empty())
            cout << i << ": " << table[i] << " " << endl;
    }
    cout << counter << endl;
}
