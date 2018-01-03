//Write a function that prompts the user to enter his or her first and last name, as two separate values. This function should return both values to the caller via additional pointer (or reference) parameters that are passed to the function. Try doing this first with pointers and then with references.
#include <iostream>

using namespace std;

//Initialize Variables
string first_name;
string last_name;

//Prototype functions
void printNames();

int main()
{
	cout << "What is your first name?\n";	
	cin >> first_name;
	cout << "What is your last name?\n";	
	cin >> last_name;

	printNames();
}

void printNames()
{
	cout << "First name: " << first_name << ", ";
	cout << "last name: " << last_name << "\n";
}
