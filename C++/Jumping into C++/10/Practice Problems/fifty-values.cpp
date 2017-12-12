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
int getValues(int num);
int randRange(int low,int high);
void printvalues(int num);

int main()
{
	srand(time(NULL));		//Roll our random seed
	getValues(50);			//Assign 50 values to the array
	printvalues(50);		//Print our values out
}

int getValues(int num)
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
	cout << "{";
	for(int i=0;i<num;i++)
	{
		if(i!=0)
			{
			cout << ",";
			}
		cout << valuelist[i];
	}
	cout << "}\n";
}
