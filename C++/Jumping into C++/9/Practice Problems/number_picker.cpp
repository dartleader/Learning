//Import required libraries for program.
#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

//Declare variables
int secret_number;
int guess;

//Prototype function
int randRange(int low, int high);
int check_guess(int guess);

int main()
{
	srand(time(NULL));			//Seed pseudo-random number generation.
	secret_number = randRange(1,100);	//Call our randRange function to pick a pseudo-random number between 1 and 100.
	cout << "Guess the random number between 1 and 100: \n";	//Ask the player what their guess is.
	cin >> guess;
	check_guess(guess);
}

int randRange(int low, int high)
{
	//Get a random number, modulate it by the range and then add the lower bound.
	return rand() % (high-low) + low;
}

int check_guess(int guess)
{
	if(guess == secret_number)
		{
			cout << "Correct! The secret number is " << secret_number << "!\n";
		}
	else if(guess <= secret_number)
		{
			cout << "Wrong! Your guess is too high!\n";
		}
	else if(guess >= secret_number)
		{
			cout << "Wrong! Your guess is too low!\n";
		}
	cout << secret_number << '\n';
}
