//Create an array of spaceship objects and write a program that continually updates their positions until they all go off the screen. Assume screen size is 1024x768
#include <iostream>

using namespace std;

//Declare structures
struct SpaceShip
{
	int number;
	int x_position;
	int y_position;
};

//Prototype functions
SpaceShip newSpaceShip;

//Initialize variables
int ship_count=0;
SpaceShip ships[5];

int main()
{
	cout << "How many spaceships would you like to generate?\n";
	cin >> ship_count;
	cout << "Generating " << ship_count << " ships.\n";

	for(int i=0;i<ship_count;i++)
	{
		ships[i].number = i;
		ships[i].x_position = i*3;
		ships[i].y_position = i*4;

		cout << "Ship number " << ships[i].number << " is at (";
		cout << ships[i].x_position << ",";
		cout << ships[i].y_position << ").\n";
	}
}
