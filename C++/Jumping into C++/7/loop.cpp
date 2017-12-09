#include <iostream>

using namespace std;

for (int i = 0; i < 100; i++)
{
	if (isPrime(i))
	{
		cout << i << '\n';
}

bool isPrime (int num)
{
	for (int i = 2; i< num; i++)
	{
		if (isDivisible(num,i)
		{
			return false;
		}
	}
	return true;
}

bool isDivisible(int number, int divisor)
{
	return num % divisor == 0;
}
