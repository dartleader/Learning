#include <iostream>
#include <string>

using namespace std;

int main()
{
	//For loop
	cout << "For loop.\n";
	for ( int i = 0; i <21; i++ )
	{
		cout << i*i << "\n";
	}
	
	//While loop
	cout << "While loop.\n";
	int i = 0;
	while ( i < 21 )
	{
		cout << i*i << "\n";
		i++;
	}
	
	//Do-while loop
	cout << "Do while loop.\n";
	i = 0;
	do 
	{
	cout << i*i << "\n";
	i++;
	}
	while ( i < 21 );
}
