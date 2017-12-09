#include <iostream>

using namespace std;

int main()
{
	int number=0;
	int input;
	while ( input != 0 )
	{
	cout << "Input number: \n";
	cin >> input;
	number = number += input;
	cout << "Running total = " << number << "\n";
	}
}
