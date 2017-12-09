#include <iostream>
#include <string>

using namespace std;

int main()
{
	int first_number;
	int second_number;
	string operand;

	//Assign numbers
	cout << "What is the first number? : \n";
	cin >> first_number;
	cout << "What is the second number? : \n";
	cin >> second_number;

	//Assign operation
	cout << "What operation would you like to perform?\n";
	cin >> operand;

	if(operand == "+")
	{
	cout << first_number << " plus " << second_number << " equals " << first_number + second_number << "\n";
	}
	else if(operand == "-")
	{
	cout << first_number << " minus " << second_number << " equals " << first_number - second_number << "\n";
	}
	else if(operand == "*")
	{
	cout << first_number << " times " << second_number << " equals " << first_number * second_number << "\n";
	}
	else if(operand == "/")
	{
	cout << first_number << " divided by " << second_number << " equals " << first_number / second_number << "\n";
	}
}
