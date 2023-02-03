#include "operations.h"
#include "Adapter.h"

vector<string> XmlOp::to_array(string xml)
{
    vector<string> out;

    for (int i = 0; i < xml.size(); i++)
    {
        string element;
        switch (xml[i])
        {
        case '<':
            while (i < xml.size())
            {
                element.push_back(xml[i]);
                if (xml[i] == '>')
                    break;
                i++;
            }
            out.push_back(element);
            break;
        case ' ':
        case '\t':
        case '\r':
        case '\n':
            continue;
            break;
        default:
            while (i < xml.size() && xml[i] < 127 && xml[i] > 31)
            {
                if (xml[i] == '<')
                {
                    i--;
                    break;
                }
                element.push_back(xml[i++]);
            }
            out.push_back(element);
        }
    }

    return out;
}

queue<string> XmlOp::to_queue(string xml)
{
    queue<string> out;

    for (int i = 0; i < xml.size(); i++)
    {
        string element = "";
        switch (xml[i])
        {
        case '<':
            while (i < xml.size())
            {
                element += xml[i];
                if (xml[i] == '>')
                    break;
                i++;
            }
            out.push(element);
            break;
        case ' ':
        case '\t':
        case '\r':
        case '\n':
            continue;
            break;
        default:
            while (i < xml.size() && xml[i] < 127 && xml[i] > 31)
            {
                if (xml[i] == '<')
                {
                    i--;
                    break;
                }
                element += xml[i++];
            }
            out.push(element);
        }
    }

    return out;
}

string XmlOp::minify(vector<string> text)
{
    string minified = "";
    for (int i = 0; i < text.size(); i++)
    {
        minified += text[i];
    }
    return minified;
}

string XmlOp::minify(string text)
{
    string minified = "";
    vector<string> elemnets = to_array(text);

    for (int i = 0; i < text.size(); i++)
    {
        minified += text[i];
    }
    return minified;
}

string XmlOp::toBitStream(string text)
{
    string result = "";
    unsigned char bitBuffer = 0;
    int bitCounter = 0;

    for (int i = 0; i < text.length(); i++)
    {
        bitBuffer = bitBuffer << 1 | text[i] - '0';
        bitCounter++;
        if (bitCounter == 7) // changed to 7bits
        {
            bitBuffer = bitBuffer + 40;
            result += bitBuffer; // to avoid escape characters added 40
            bitCounter = 0;
            bitBuffer = 0;
        }
    }

    bitBuffer = bitBuffer << (7 - bitCounter); // changed to 7bits /////////changed
    if (bitCounter != 0)
        bitBuffer = bitBuffer + 40;
    result += bitBuffer;
    string left = to_string(bitCounter);
    result += left;

    return result;
}

string XmlOp::decToBin(int n)
{
    string result = "";
    std::stack<int> binaryNum;
    for (int i = 0; n > 0; i++)
    {
        binaryNum.push(n % 2);
        n = n / 2;
    }
    while (binaryNum.size() < 7) // changed to 7bits
    {
        binaryNum.push(0);
    }
    while (binaryNum.size() > 0)
    {
        if (binaryNum.size() <= 7) // changed to 7bits
        {
            result += to_string(binaryNum.top());
        }
        binaryNum.pop();
    }

    return result;
}

void XmlOp::removeExtraBits(string &s, int extra)
{
    int last = s.length() - (6 - extra); //(7 - extra); // changed to 7bits
    s = s.substr(0, last - 1);
}

string XmlOp::toByteStream(string text)
{
    string temp = "";
    string result = "";
    char addedBits; // this is the last bit count to retrieve the last character
    int addedBitsNumber;
    int itr = text.length() - 1;
    while (text[itr] > '7' || text[itr] < '0')
    {
        itr--;
    }

    addedBits = text[itr];
    addedBitsNumber = addedBits - '0';
    for (int i = 0; i < itr; i++)
    {

        if (i == text.length() - 2)
        {
            if (text[i + 1] != 0)
            {
                char ubyte = text[i];
                result += decToBin(int(ubyte) - 40); // 40 was added to avoid escape characters
                break;
            }
        }
        else
        {
            unsigned char ubyte = text[i];
            int val = (int(ubyte) - 40);
            result += decToBin(val); // 40 was added to avoid escape characters
        }
    }
    removeExtraBits(result, addedBitsNumber);
    return result;
}

void XmlOp::saveHeader(string &s, vector<pair<char, int>> vec)
{
    s = to_string(4 * vec.size());
    s += ",";
    for (int i = 0; i < vec.size(); i++)
    {
        s += vec[i].first;
        s += ",";
        s += to_string(vec[i].second);
        s += ",";
    }
}

vector<pair<char, int>> XmlOp::readHeader(string &s)
{
    vector<pair<char, int>> freqPairArr;
    string head = "";
    string freqStr = "";
    char tempStr;
    int tempFreq = 0;
    int i = 0;
    int j = 0;
    int freqArrIndex = 0;
    while (s[i] != ',')
    {
        head += s[i];
        i++;
    }
    int headNum = stoi(head);
    s = s.substr((i + 1), s.length());
    i = 0; // counter to loop over the text while j is to get the number of blocks
    // for string: a,123,  where 123 is the frequency of a
    //       a , 123 ,
    // j:    1 2  3  4
    // i:    1 2 345 6
    bool startOfFreq = false; // set when passing through frequency value to concatenate
    while (j < headNum)
    {

        if (j % 4 == 0)
        {
            tempStr = s[i];
            j++;
            i++;
            if (s[i] != ',')
                i++;
        }
        if (j % 4 == 1) // indicates separator
        {
            j++;
            i++;
            startOfFreq = true;
        }
        if (startOfFreq == true)
        {
            if (s[i] != ',')
                freqStr += s[i];
            else // reached separator
            {
                tempFreq = stoi(freqStr);
                freqPairArr.emplace_back(tempStr, tempFreq);
                freqStr = "";
                startOfFreq = false;
                j++;
            }
        }
        if (j % 4 == 3) // separator
        {
            j++;
            freqArrIndex++;
        }
        i++;
    }
    s = s.substr(i, s.length());

    return freqPairArr;
}

void XmlOp::compress(string text)
{
    HashMap codeTable;
    Huffman *h = new Huffman();
    h->createFreqArr(text);
    string result = "";
    string fullRes = "";
    vector<pair<char, int>> vec = h->freqToPairs(h->getFreqArray());

    saveHeader(fullRes, vec);

    h->HuffmanCodes(vec, &codeTable);
    codeTable.printHash();

    for (int i = 0; i < text.length(); i++)
    {
        result += codeTable.searchByKey(text.at(i));
    }

    result = toBitStream(result);

    fullRes += result;

    ofstream myWriteFile;
    myWriteFile.open("compressed.txt");
    for (int i = 0; i < fullRes.size(); i++)
    {
        myWriteFile << fullRes[i];
    }
    myWriteFile.close();
}

void XmlOp::decompress(string &compressedStr)
{

    vector<pair<char, int>> freqPairArr = readHeader(compressedStr);
    Huffman *h = new Huffman();
    compressedStr = toByteStream(compressedStr);

    string result = h->HuffmanDecodes(freqPairArr, compressedStr);
    ofstream myWriteFile;
    myWriteFile.open("decompressed.txt");
    for (int i = 0; i < result.size(); i++)
    {
        myWriteFile << result[i];
    }
    myWriteFile.close();
}

vector<pair<string, int>> XmlOp::Consistency(string input)
{
    stack<pair<string, int>> tags;
    vector<pair<string, int>> errors;
    vector<string> elements = XmlOp::to_array(input);

    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i][0] == '<')
        {
            if (elements[i][1] == '/')
            {
                /*
                auto top = tags.top();
                string tagName = top.first.substr(1, top.first.size() - 2);
                if (tagName != elements[i].substr(2, elements[i].size() - 3))
                    errors.push_back(pair<string, int>(elements[i], i+1));
                else
                    tags.pop();
                */
                stack<pair<string, int>> fErrors = tagExists(tags, elements[i].substr(2, elements[i].size() - 3), i + 1);
                while (!fErrors.empty())
                {
                    errors.push_back(fErrors.top());
                    fErrors.pop();
                }
            }
            else
                tags.push(pair<string, int>(elements[i], i + 1));
        }
        else
            continue;
    }
    while (!tags.empty())
    {
        errors.push_back(tags.top());
        tags.pop();
    }

    return errors;
}

stack<pair<string, int>> XmlOp::tagExists(stack<pair<string, int>> &tags, string cmp, int line)
{
    bool found = false;
    stack<pair<string, int>> errors;
    while (!tags.empty())
    {
        auto top = tags.top();
        string tagName = top.first.substr(1, top.first.size() - 2);
        if (tagName != cmp)
        {
            errors.push(tags.top());
            tags.pop();
        }
        else
        {
            found = true;
            tags.pop();
            break;
        }
    }

    if (!found)
    {
        while (!errors.empty())
        {
            tags.push(errors.top());
            errors.pop();
        }
        errors.push(pair<string, int>("</" + cmp + ">", line));
    }

    return errors;
}

string XmlOp::printErrors(string input)
{
    vector<pair<string, int>> errors = Consistency(input);
    string out = "";

    for (auto it : errors)
    {
        if (it.first[1] == '/')
            out += "Missing opening tag for: ";
        else
            out += "Missing closing tag for: ";

        out = out + it.first + " in line(";
        string line = Adapter::to_unmanaged(it.second.ToString());
        out = out + line + ")\r\n";
    }
    return out;
}

/*
string process_string(const string& input) {
    istringstream iss(input);
    string str;
    return str;
}
*/

string XmlOp::insert_tabs(char s, int n)
{
    string insert_tabs;
    for (int i = 0; i < n; i++)
        insert_tabs += s;

    return insert_tabs;
}

string XmlOp::format_xml(string file)
{
    queue<string> q;
    string x = "";
    string s = "";
    string next;
    long long i = 0, count; // count for the number of characters in tags and data
    int count_tabs = 0;     // count for the number of tabs

    q = XmlOp::to_queue(file);

    while (!q.empty())
    {
        x = q.front();
        q.pop();
        if (x[0] == '<')
        {
            // closing tags
            if (x[1] == '/')
            {
                count_tabs--;
                s += insert_tabs('\t', count_tabs);
                s += x;
                s += "\r\n";
            }
            // opening tag
            else
            {
                s += insert_tabs('\t', count_tabs);
                s += x;
                count_tabs++;
                s += "\r\n";
            }
        }
        // data
        else
        {
            s += insert_tabs('\t', count_tabs);
            s += x;
            s += "\r\n";
        }
    }
    return s;
}

string XmlOp::correct(vector<pair<string, int>> errors, string s)
{
    // stack<string> sElements;
    string out = "";
    vector<string> elements = to_array(s);
    map<int, string> errorl;
    for (auto i : errors)
        errorl[i.second] = i.first;

    int j = 0;

    for (int i = 0; i < elements.size(); i++)
    {
        if (errorl[i + 1] == "")
            out += elements[i];
        else
        {
            if (errorl[i + 1][1] == '/')
            {
                out += "<" + elements[i].substr(2, elements.size() - 2);
                out += elements[i];
            }
            else
            {
                out += elements[i];
                out += "</" + elements[i].substr(1, elements[i].size() - 1);
            }
        }
    }
    return out;
}
