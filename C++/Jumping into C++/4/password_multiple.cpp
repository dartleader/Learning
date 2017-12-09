#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables to store usernames/passwords
	string password_one = "cookie";
	string password_two = "baseball";
	string password_three = "monster";

	string password_attempt_one;
	string password_attempt_two;
	string password_attempt_three;

	string username_one = "bacon";
	string username_two = "bison";
	string username_three = "basin";

	string username_attempt_one;
	string username_attempt_two;
	string username_attempt_three;

	//Ask usernames
	cout << "Username 1: \n";
	cin >> username_attempt_one;
	cout << "Username 2: \n";
	cin >> username_attempt_two;
	cout << "Username 3: \n";
	cin >> username_attempt_three;

	//Challenge user for passwords
	cout << "User 1 password? :\n";
	cin >> password_attempt_one;
	cout << "User 2 password? :\n";
	cin >> password_attempt_two;
	cout << "User 3 password? :\n";
	cin >> password_attempt_three;


	//Check provided username and password against variables
	if ((username_attempt_one == username_one) && (password_attempt_one == password_one))
	{
	cout << "User 1 successfully logged in as " << username_one << ".\n";
	}
	else
	{
	cout << "User 1 login failed.\n";
	cout << "Please retry for user 1: \n";
	cout << "Username 1: \n";
	cin >> username_attempt_one;
	}
	if ((username_attempt_two == username_two) && (password_attempt_two == password_two))
	{
	cout << "User 2 successfully logged in as " << username_two << ".\n";
	}
	else
	{
	cout << "User 2 login failed.\n";
	cout << "Please retry for user 1: \n";
	cout << "Username 1: \n";
	cin >> username_attempt_one;


as
as
:q!
	}
	if ((username_attempt_three == username_three) && (password_attempt_three == password_three))
	{
	cout << "User 3 successfully logged in as " << username_three << ".\n";
	}
	else
	{
	cout << "User 3 login failed.\n";
	}
}
