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
int sortArray(int array[]);

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
	//Temporary variables to check if arrays are sorted
	bool sorted=true;
	int i=0;
	
	//Message to user
	cout << "Checking array " << array << " to see if it is sorted.\n";
	
	//The primary while loop
	while(sorted==true && i < 10)
	{
		cout << "Checking element " << i ;
		//Nested for loop to check the current element against each of the others in series
		for(int j=i;j<10;j++)
		{
			if(array[j]<array[i])		//If it is smaller than the previous array element, it is not in the correct position to be considered sorted
			{	
//Restart here next time - while/for loops work for the sorted array but detect backwards!? (ie: lesser than, when in fact greater than)
				sorted=false;
				cout << ": this element is not sorted, " << array[j] << " is smaller than " << array[i] << "!\n";
			}
		}
		if(sorted==true)
		{
			cout << ": it is correctly sorted.\n";
		}
		i++;
	}
	if(sorted==true)
	{
		cout << "Hooray! The array " << array << " is sorted!\n";
	}
	else
	{
		cout << "Sorry! The array " << array << " is not sorted correctly!\n";
	}
}

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

int sortArray(int array[])
{
	cout << "Debug test print.\n";
}
