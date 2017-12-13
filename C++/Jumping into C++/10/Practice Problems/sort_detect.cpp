//Write a program that detects if a list is sorted or not, and if it is not sorted, sort it
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Declare variables
int sortedArray[10];			//Declare an array to be filled with sorted data.
int randomArray[10];			//Declare an array which will be filled with random integers

//Prototype functions
int createSortedArray(int num[]);
int createRandomArray(int num[]);
int randRange(int low,int high);		//Function to generate pseudo-random numbers within a set range confined between a low and high bound
bool sort_detect(int array[]);			//Function which will determine if an array is sorted or not, returning True if sorted, and False otherwise
int printArray(int array[]);

int main()
{
	srand(time(NULL));	//Seed our randomizer

	//Generate our arrays
	//For loop to generate the sorted array
	for(int i;i<10;i++)
	{
		sortedArray[i]=i;
	}

	//For loop to generate the random array
	for(int i;i<10;i++)
	{
		randomArray[i]=randRange(1,1000);
	}

	//Print our arrays for debug purposes
	cout << "'Sorted' Array is : \n:";
	printArray(sortedArray);
	cout << "'Unsorted' Array is : \n:";
	printArray(randomArray);

	//Check if our arrays are sorted
	cout << "Checking if arrays are sorted ... \n";
	sort_detect(sortedArray);
	sort_detect(randomArray);
}

int randRange(int low,int high)
{
	return rand() % (high-low)+low;
}

bool sort_detect(int array[])
{
	int temp = array[0];		//Initialize temp variable as first array element
	for (int i=0;i<10;i++)
	{
		//Check if current array element is larger than the previous one
		if(array[i]<temp){	//If it is not larger than the previous array element, return false
			cout << "This array is not sorted, " << array[i] << " is smaller than " << temp << "!\n";
			return false;
		}
		else			//If it is larger, return true
		{
			cout << "This array is sorted!\n";
			return true;
		}
	}		
}

/*int createRandomArray(int array[])
{
	for(int i;i<10;i++)
	{
		array[i]=randRange(1,1000);
	}
}*/

int printArray(int array[])
{
	cout << "[";
	for(int i;i<10;i++)
	{
		if(i!=0)
		{
		cout << ",";
		}
	cout << array[i];
	}
	cout << "]\n";
}
