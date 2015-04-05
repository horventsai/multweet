#include <iostream>
#include <string>

using namespace std;

string userin(string &);
void print(const string);

string userin(string &s)
{
	getline(s);
}

void print(const string s)
{
}

int main()
{
	string uin;

	userin(uin);
	print(uin);

	return 0;
}
