//Import required libraries for program.
#include <ctime>
#include <iostream>
#include <cstdlib>

//Declare namespace.
using namespace std;

//Declare variables
int secret_number;				//The secret number we are trying to guess.
int top_guess = 100;				//Defines the top bound for guesses.
int bottom_guess = 0;				//Defines the bottom bound for guesses.
int guess;					//Actual guess submitted to program.
int tries = 0;					//Keeps track of how many tries the program takes.
int guess_tries = 0;				//Variable for how many tries random guessing takes.
int split_tries = 0;				//Variable for how many tries split guessing takes.
bool correct_guess = false;			//Turns true upon guessing correctly.
bool splitting_method = false;			//Variable to signal if we are using the splitting method.

//Prototype functions
int randRange(int low, int high);		//Function to compute a random number within a desired range.
int check_guess(int guess);			//Function to check if our guess equals the secret_number.

int main()
{
	//Call our functions to generate the target random number.
	srand(time(NULL));			//Seed pseudo-random number generation.
	secret_number = randRange(1,100);	//Call our randRange function to pick a pseudo-random number between 1 and 100.

	//Begin functions to determine the random number.
	//Function 1, guessing completely at random:
	while(correct_guess == false)
		{
			guess = randRange(1,100);	//Call our randRange function to pick a pseudo-random number between 1 and 100 as a guess.
			check_guess(guess);		//Call the check_guess function to check the guess.
		}
	guess_tries=tries;				//Set the number of tries using random guessing counter equal to the number of tries it took.

	//Reset the correct_guess variable to false and tries back to zero for new method.
	correct_guess=false;
	tries = 0;

	//Now that we are switching to the splitting method, declare that.
	splitting_method = true;

	//Function 2, guessing using the splitting method.
	while(correct_guess == false)
		{
			check_guess((bottom_guess+top_guess)/2);
		}
	split_tries = tries;				//Set the number of tries using split guessing equal to the number of tries it took.

	//Displays final try count before exiting.
	cout << "Took " << guess_tries << " random guesses to guess the correct number of " << secret_number << ".\n";				//Display final count of random guess method.
	cout << "Took " << split_tries << " guesses to guess the correct number of " << secret_number << " using the splitting method.\n";	//Display final count of splitting method.
}

int randRange(int low, int high)
{
	//Get a random number, modulate it by the range and then add the lower bound.
	return rand() % (high-low) + low;
}

int check_guess(int guess)
{
	if(guess == secret_number)	//Guess is exactly correct.
		{
			cout << "Correct! The secret number is " << secret_number << "!\n";
			correct_guess = true;	//Mark the guess as correct!
		}
	else if(guess >= secret_number)	//Guess is too high.
		{
			cout << "You guessed " << guess << "! Your guess is too high!\n";
			if(splitting_method == true)	//Check if we are using the split method; if we are, modify the bounds of the search.
			{
				cout << "Changing top boundary of guess to " << guess << "\n";
				top_guess=guess;
			}
		}
	else if(guess <= secret_number)	//Guess is too low.
		{
			cout << "You guessed " << guess << "! Your guess is too low!\n";
			if(splitting_method == true)	//Check if we are using the split method; if we are, modify the bounds of the search.
			{
				cout << "Changing bottom boundary of guess to " << guess << "\n";
				bottom_guess=guess;
			}
		}
	tries++;				//Increment the count of tries by 1.
	cout << secret_number << '\n';		//Print secret_number for debugging.
}
