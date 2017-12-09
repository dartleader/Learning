#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	string password;
	cout << "Enter your username: \n";
	getline(cin, username,'\n');

	cout << "Enter your password: \n";
	getline(cin, password,'\n');
	if (username == "root" && password == "xyzzy")
	{
		cout << "Access allowed! \n";
	}
	else
	{
		cout << "Bad Username/Password combination, access denied! \n";
		//returning is a convenient way to stop the program
	}
	//Continue Onward!
}
