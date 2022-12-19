#include <iostream>
#include <string>
#include <queue>
#include <stack>
//#include "XmlToTree.h"
using namespace std;
//Function to insert a string n times its used to insert tabs

string insert(string s, int n)
{
	string insert;
	for (int i = 0; i < n; i++)
		insert += s;

	return insert;
}

void xmltojson(string* file)
{
	queue <string> q;
	string x = "";
	string s = "";
	string t("    ");
	string n("\n");
	long long i = 0, count;//count for the number of characters in tags and data
	int count_tabs = 1;  //count for the number of tabs
	while (i < file->length())
	{
		count = 0;
		if (file->at(i) == '<')
		{
			for (long x = i; file->at(x) != '>'; x++)
			{
				count++;
			}
			count++;
			x = file->substr(i, count);
			q.push(x); //pushing opening and closing tag into the queue
			i = i + count;
		}
		else
		{

			for (long x = i; file->at(x) != '<'; x++)
			{
				count++;
			}

			x = file->substr(i, count);
			q.push(x);    //pushing data into the queue
			i += count;
		}

	}
	while (!q.empty())
	{
		count = 0;
		x = q.front();
		if (x.at(0) == '<')
		{
			for (long j = 0; j <x.size(); j++)
			{
				count++;
			}
			//closing tags
			if (x.at(1) == '/')
			{
				count_tabs -= 2;
				s += insert(t, count_tabs);
				//s = s + x ;
				s += insert("}\n", 1);
				s = s + n;
				q.pop();
				if (!q.empty())
				{
					// to fix the problem of /n without spaces
					if (q.front().length() > 1) {
						if (q.front().at(1) != '/')
						{
							
							s += insert(t, count_tabs);
							count_tabs++;
							

						}
						else
						{
							s += insert(t, count_tabs);
							if (x.at(count - 2) == 's') {
								//s += insert(t, count_tabs);
								s += insert("]\n", 1);

							}
							else {
								//s += insert(t, count_tabs);
								s += insert("}\n", 1);
								
							}
							//s += insert(t, count_tabs);
							count_tabs++;
						}
					}

				}
			}
			//opening tag
			else
			{
				//s += insert(t, count_tabs);
				s += insert("\"", 1);
				if (x.at(count-2) == 's') {
					s = s + x.substr(1, count - 2) + "\": [ ";
					s += insert(t, count_tabs);
				}
				else {
					s = s + x.substr(1, count - 2) + "\": { ";
					s += insert(t, count_tabs);
				}
				
				
				//s += insert(t, count_tabs);
				count_tabs++;
				q.pop();
				
				if (q.front().at(0) == '<') {
					s = s + n;
				}
				
			}
		}
		//data
		else
		{
			//s += insert(t, count_tabs);
			s += insert("\"", 1);
			s = s + x;
			s += insert("\",", 1);
			s = s + n;
			q.pop();
		}
	}

	
	*file ="{\n" + s ;

}
