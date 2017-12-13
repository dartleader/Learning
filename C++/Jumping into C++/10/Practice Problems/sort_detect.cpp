//Write a program that detects if a list is sorted or not, and if it is not sorted, sort it
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Declare variables
int sortedArray[10];			//A sorted array
int unsortedArray[10];			//An unsorted array
int randomArray[10];			//Array which will be filled with random integers

//Prototype functions
int randRange(int low,int high);		//Function to generate pseudo-random numbers within a set range confined between a low and high bound
bool sort_detect(int array[]);			//Function which will determine if an array is sorted or not, returning True if sorted, and False otherwise

int main()
{
	srand(time(NULL));	//Seed our randomizer
	//Check if our arrays are sorted
	sort_detect(sortedArray);
	sort_detect(unsortedArray);
}

int randRange(int low,int high)
{
	rand() % (high-low)+low;
}

bool sort_detect(int array[])
{
	int temp = array[0];		//Initialize temp variable as first array element
	for (int i=0;i<10;i++)
	{
		//Check if current array element is larger than the previous one
		if(array[i]<=temp){	//If it is not larger than the previous array element, return false
			return false;
		}
		else			//If it is larger, return true
		{
			return true;
		}
	}		
}
