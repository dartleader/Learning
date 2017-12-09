#include <iostream>
#include <string>

using namespace std;
string password;

int main()
{
	do
	{
		cout << "Please enter your password: \n";
		cin >> password;
	} while (password != "foobar");
	cout << "Welcome, you got the password right.\n";
}
