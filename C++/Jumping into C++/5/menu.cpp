#include <iostream>
#include <string>

using namespace std;

int main()
{
	string option_1 = "pizza";	
	string option_2 = "cookie";	
	string option_3 = "donair";	
	string option_4 = "jerky";	
	string option_5 = "beer";	

	string choice;

	while ((choice != option_1)
	||    (choice != option_2)
	||    (choice != option_3)
	||    (choice != option_4)
	||    (choice != option_5))
	{
		cout << "Please select a valid menu option.\n";
		cout << option_1 << "\n";
		cout << option_2 << "\n";
		cout << option_3 << "\n";
		cout << option_4 << "\n";
		cout << option_5 << "\n";
		cin >> choice;
	}
}
