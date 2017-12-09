#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;
	while (1)
	{
		cout << "Please enter your password: \n";
		cin >> password;
		if ( password == "foobar" )
		{
			break;
		}
	}
	cout << "Welcome, you got the password right!\n";
}
