#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age_one;
	int age_two;
	cout << "How old is the first user? : " << '\n';
	cin >> age_one;
	cout << "How old is the second user? : " << '\n';
	cin >> age_two;

	if (age_one > 100 && age_two > 100)
	{
	cout << "Holy cow, both users are geriatric!\n";
	}
	else if (age_one > age_two)
	{
	cout << "User one is older than user two!\n";
	}
	else if (age_one < age_two)
	{
	cout << "User two is older than user one!\n";
	}
	else
	{
	cout << "Users are the same age!\n";
	}
}
