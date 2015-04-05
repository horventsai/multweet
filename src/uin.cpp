#include <iostream>
#include <string>

using namespace std;

void userin(string &);
void print(const string);

void userin(string &s)
{
	getline(cin,s);

	return;
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
	print(uin);

	return 0;
}
