//Create an array of spaceship objects and write a program that continually updates their positions until they all go off the screen. Assume screen size is 1024x768
#include <iostream>

using namespace std;

//Structure for the spaceships
struct SpaceShip
{
	int x_position=0;
	int y_position=0;
};

//Initialize variables
int ship_count = 2;	//How many ships do we want in total?
SpaceShip ships[2];	//Array to hold the spaceships

int main()
{
	cout << "How many ships would you like to generate?\n";
	cin >> ship_count;
	for(int i=0;i<ship_count;i++)
	{
		//getSpaceShip(ships[i]);
	}
}
