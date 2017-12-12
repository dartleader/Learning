//Insertion_sort example program from textbook rewritten to sort an array of any size.
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int arraysize;
int findSmallestRemainingElement(int array[], int size,int index);
void swap (int array[], int first_index,int second_index);

void sort (int array[], int size)
{
	for (int i=0;i<size;i++)
	{
		int index = findSmallestRemainingElement(array,size,i);
		swap(array,i,index);
	}
}

int findSmallestRemainingElement(int array[], int size,int index)
{
	int index_of_smallest_value = index;
	for (int i = index+1;i<size;i++)
	{
		if (array [i] < array[index_of_smallest_value])
		{
			index_of_smallest_value = i;
		}
	}
	return index_of_smallest_value;
}

void swap (int array[], int first_index,int second_index)
{
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
}

//Small helper method to display the before and after arrays
void displayArray(int array[],int size)
{
	cout << "{";
	for (int i = 0; i<size;i++)
	{
		//You'll see this pattern a lot in nicely formatting lists -- check if we're past the first element, and if so, append a comma.
		if(i!=0)
		{
			cout << ", ";
		}
		cout << array[i];
	}
	cout << "}";
}

int main()
{
	cout << "How big an array would you like to sort?\n";
	cin >> arraysize;
	int array[arraysize];
	srand(time(NULL));
	for (int i = 0; i<arraysize;i++)
	{
		//keep the numbers small so they're easy to read
		array[i] = rand() % 100;
	}
	cout << "Original array: ";
	displayArray(array,arraysize);
	cout << "\n";

	sort(array,arraysize);

	cout << "Sorted array: ";
	displayArray(array,arraysize);
	cout << "\n";
}
