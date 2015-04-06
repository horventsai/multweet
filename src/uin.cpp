#include <iostream>
#include <vector>
#include <string>

using namespace std;

void userin(string &);
vector <string> parsed(const string);
void print(const string);


void userin(string &s)
{
	getline(cin,s);

	return;
}

vector <string>parsed (const string s)
{
	vector <string>v;
	string parsing = s;
	string par = " ";

	int j = 0;
	int k = 0;
	for(int i = 0; i < parsing.size(); i++)
	{
		if(parsing.at(i) == ' ')
		{

			/*
			j = 0;
			v.push_back(par);
			v.at(k) = parsing.at(i);
			k++;
			*/
			continue;
		}
		else if(parsing.at(i) != ' ')
		{
			if(j == 0)
			{
				/*
				v.push_back(par);
				v.at(k) = parsing.at(i);
				j++;
				*/
			}
			else
			{
				/*
				v.at(k).append(parsing.at(i));
				j++;
				*/
			}
		}
	}

	cout << "vector is as follows: ";
	for(int i = 0; i < v.size(); i++)
	{
		cout << v.at(i);
	}
	cout << endl;

	return v;
}

void print(const string s)
{
	char check = ' ';
	bool cont = false;

	cout << "Your message is as follows:" << endl;
	cout << s << endl;

	cout << "Your message will tweet as follows:" << endl;
	cout << s << "(" << s.size() << "/#" <<  endl;

	while(!cont)
	{
		cout << "Do you wish to post? (Y or N then hit enter): ";
		cin >> check;

		if((check == 'Y') || (check == 'y') || (check == 'N') || (check == 'n'))
		{
			cont = true;
		}
		else
		{
			cout << "Please enter a valid choice. Y or y for yes, N or n for no." << endl;
		}
	}

	if(check == 'Y' || check == 'y')
	{
		//post to twitter. push to twitter push library
	}

	return;
}

int main()
{
	string uin;

	userin(uin);
	parsed(uin);
	print(uin);

	return 0;
}
