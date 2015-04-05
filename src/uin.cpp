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
	cout << "Your message is as follows:" << endl;
	cout << s << endl;
}

int main()
{
	string uin;

	userin(uin);
	print(uin);

	return 0;
}
