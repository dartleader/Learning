//Write a program that lets the user fill in a single structure with the name, address and phone number of a single person
#include <iostream>
#include <string>

using namespace std;

//Declare structure
struct Person
{
	string name;
	string address;
	int phone_number;
};

int main()
{
	Person user;
	cout << "User name: \n";	
	cin >> user.name;
	cout << "User address: \n";	
	cin >> user.address;
	cout << "User phone number: \n";	
	cin >> user.phone_number;

	cout << "User name : " << user.name << "\n";
	cout << "User address : " << user.address << "\n";
	cout << "User phone number : " << user.phone_number << "\n";
}
