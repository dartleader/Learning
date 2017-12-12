//Program to display a three-digit slot machine output and compute random rolls for each.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Declare variables
int rolls;
int roll_a;
int roll_b;
int roll_c;

//Prototype functions
int spinCount(int num);
int randRange(int high, int low);

int main()
{
	srand(time(NULL));		//Generate a pseudo-random number
	cout << "Slot machine is ready; how many spins would you like?\n";
	cin >> rolls;
	cout << "You chose " << rolls << " rolls.";
	for (int i=0;i<rolls;rolls++)
	{
		spinCount(i);	
	}

	cout << "[" << roll_a << "] [" << roll_b << "] [" << roll_c << "]\n";
}

int spinCount(int num)
{
		roll_a=randRange(10,99);
		roll_b=randRange(10,99);
		roll_c=randRange(10,99);
}

int randRange(int high, int low)
{
	return (rand() % (high-low) + low);
}
