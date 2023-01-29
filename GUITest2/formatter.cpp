#include <iostream>
#include <string>
#include <queue>
#include "formatter.h"

using namespace std;
//Function to insert a string n times its used to insert tabs

string insert_tabs(string s, int n)
{
	string insert_tabs;
	for (int i = 0; i < n; i++)
		insert_tabs += s;

	return insert_tabs;
}

void format_xml(string* file)
{
	queue <string> q;
	string x = "";
	string s = "";
	string t("    ");
	string n("\r\n");
	long long i = 0, count;//count for the number of characters in tags and data
	int count_tabs = 1;  //count for the number of tabs
	while (i < file->length())
	{
		count = 0;
		if (file->at(i) == '<')
		{
			if (file->at(i) == '/') {

			}
			for (long x = i; file->at(x) != '>'; x++)
			{
				count++;
			}
			count++;
			x = file->substr(i, count);
			q.push(x);     //pushing opening and closing tag into the queue
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
		x = q.front();
		if (x.at(0) == '<')
		{
			//closing tags
			if (x.at(1) == '/')
			{
				count_tabs -= 2;
				s += insert_tabs(t, count_tabs);
				s = s + x;
				s = s + n;
				q.pop();
				if (!q.empty())
				{
					// to fix the problem of /n without spaces
					if (q.front().length() > 1) {
						if (q.front().at(1) != '/')
						{

							s += insert_tabs(t, count_tabs);
							count_tabs++;

						}
						else
						{
							count_tabs++;
						}
					}

				}
			}
			//opening tag
			else
			{

				s = s + x;
				s = s + n;
				s += insert_tabs(t, count_tabs);
				count_tabs++;
				q.pop();
			}
		}
		//data
		else
		{

			s = s + x;
			s = s + n;
			q.pop();
		}
	}
	*file = s;
}
