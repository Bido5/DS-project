#include "HashMap.h"

int HashMap::counter = 0;
int HashMap::hashString(char key)
{ // calculate key value for the list which is the compressed value
    return int(key); //
}

void HashMap::insert(char key, string value)
{
   idx = hashString(key);
    if (table[idx].empty())
    {
        table[idx] = value; // check is the content of array[i] is empty to insert a value
        counter++;
    }
}

string HashMap::searchByKey(char key)
{
    idx = hashString(key);
    return table[idx]; // returns the array content of this key
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
