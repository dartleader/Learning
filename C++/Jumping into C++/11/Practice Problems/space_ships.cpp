//Create an array of spaceship objects and write a program that continually updates their positions until they all go off the screen. Assume screen size is 1024x768
#include <iostream>

using namespace std;

//Structure for the spaceships
struct SpaceShip
{
	int x_position;
	int y_position;
	string name;
};

//Initialize variables
int ship_count = 2;	//How many ships do we want in total?
SpaceShip ship_1;	//Array to hold the spaceships
SpaceShip temp;

//Prototype functions
SpaceShip getSpaceShip();
//void printSpaceShip(SpaceShip ship);

//SpaceShip getSpaceShip(int ship);

int main()
{
	//cout << "How many ships would you like to generate?\n";
	//cin >> ship_count;
	
	//Create spaceship
	SpaceShip ship_1;
	ship_1.name = "Tyko";
	ship_1.x_position=5;
	ship_1.y_position=7;
	/*for(int i=0;i<ship_count;i++)
	{
		cout << "Generating spaceship!\n";
		SpaceShip temp = getSpaceShip();
	}*/
	cout << "Name : " << ship_1.name << "\n";
	cout << "X position : " << ship_1.x_position << "\n";
	cout << "Y position : " << ship_1.y_position << "\n";
	//printSpaceShip(ship_1);
}

/*printSpaceShip(ship){
	cout << ship.name;
	cout << ship.x_position;
	cout << ship.y_position;
}*/

SpaceShip getSpaceShip()
{
	SpaceShip temp;
	temp.x_position;
	temp.y_position;
	return temp;
}
