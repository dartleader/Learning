//Import required libraries for program.
#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

//Declare variables
int secret_number;
int guess = 50;					//Set initial guess to 50 in order to split the numbers evenly.
int tries = 0;					//Keeps track of how many tries the program takes.
bool correct_guess = false;			//Turns true upon guessing correctly.

//Prototype functions
int randRange(int low, int high);
int check_guess(int guess);
void set_guess(int guess);
int get_guess();

int main()
{
	srand(time(NULL));			//Seed pseudo-random number generation.
	secret_number = randRange(1,100);	//Call our randRange function to pick a pseudo-random number between 1 and 100.

	while(correct_guess == false)
		{
			check_guess(guess);
			tries++;
			get_guess();
		}
	cout << "Took " << tries << " to guess the correct number of " << guess << "\n";	//Displays final try count before exiting.
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
			correct_guess = true;	//Mark the guess as correct!
		}
	else if(guess >= secret_number)
		{
			cout << "You guessed " << guess << "! Your guess is too high!\n";
			set_guess(guess/2);	//Halve the guess
		}
	else if(guess <= secret_number)
		{
			cout << "You guessed " << guess << "! Your guess is too low!\n";
			set_guess(guess*2);	//Double the guess
		}
	cout << secret_number << '\n';
}

void set_guess(int num)
{
	guess = num;	
}

int get_guess()
{
	return guess;
}
