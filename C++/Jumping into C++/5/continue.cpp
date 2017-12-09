#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	while (true)
	{
		i++;
		if ( i == 10)
		{
			continue;
		}
		cout << i << "\n";
	}
}
