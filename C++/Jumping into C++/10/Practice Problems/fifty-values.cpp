//Write a program that takes in 50 values and prints out the highest, lowest, the average and then all 50 input values, one per line.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Declare variables
int valuelist [ 50 ];
int highestvalue;
int lowestvalue;

//Prototype functions
int assignValues(int num);
int randRange(int low,int high);
void printvalues(int num);
int getHighest(int array[]);
int getLowest(int array[]);

int main()
{
	srand(time(NULL));		//Roll our random seed
	assignValues(50);		//Assign 50 values to the array
	printvalues(50);		//Print our values out

	//Functions to do work on the array go here
	highestvalue=getHighest(valuelist);
	lowestvalue=getLowest(valuelist);


	//Print values we have calculated
	cout << "Highest value : " << highestvalue << "\n";
	cout << "Lowest value : " << lowestvalue << "\n";
}

int assignValues(int num)
{
	for (int i=0;i<num;i++)
	{
		valuelist[i]=randRange(0,1000);
	}
}

int randRange(int low, int high)
{
	return rand() % (high-low) + low;
}

void printvalues(int num)
{
	for(int i=0;i<num;i++)
	{
		cout << valuelist[i] << "\n";
	}
}

int getHighest(int array[])
{
	int highest=array[0];			//Initialize highest variable as the first array element
	//Check each array element; if it is higher than highest, assign its value to highest
	for (int i=0;i<50;i++)
	{
		if(array[i]>highest)
		{
			highest=array[i];	
		}
	}
	return highest;
}

int getLowest(int array[])
{
	int lowest=array[0];			//Initialize lowest variable as the first array element
	//Check each array element; if it is lower than lowest, assign its value to lowest
	for (int i=0;i<50;i++)
	{
		if(array[i]<lowest)
		{
			lowest=array[i];	
		}
	}
	return lowest;
}
