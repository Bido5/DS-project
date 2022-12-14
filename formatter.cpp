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
	string n("\n");
	long long i = 0, flag;//flag for the number of characters in tags and data
	int flag_tabs = 1;  //flag for the number of tabs
	while (i != file->size())
    {
        flag=0;
        if (file->at(i) == '<')
		{
			for (long x = i; file->at(x) != '>'; x++)
			{
				flag++;
			}
			flag++;
			x = file->substr(i, flag);
			q.push(x);     //pushing opening and closing tag into the queue
			i = i + flag;
		}
		else
		{
			for (long x = i; file->at(x) != '<'; x++)
			{
				flag++;
			}
			x = file->substr(i, flag);
			q.push(x);    //pushing data into the queue
			i += flag;
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
				flag_tabs-=2;
				s += insert_tabs(t, flag_tabs);
				s = s + x;
				s = s + n;
				q.pop();
				if (!q.empty())
				{
					if (q.front().at(1) != '/')
					{
						s += insert_tabs(t, flag_tabs);
						flag_tabs++;
					}
					else
					{
						flag_tabs++;
					}
				}
			}
			//opening tag
			else
			{
				s = s + x;
				s = s + n;
				s += insert_tabs(t, flag_tabs);
				flag_tabs++;
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
