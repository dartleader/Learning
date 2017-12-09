#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (int i = 99; i > 0; i--)
	{
	cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
	cout << " we'll take one down and pass it around, there's " << i-1 << " bottles of beer on the wall.\n";
	}
}
