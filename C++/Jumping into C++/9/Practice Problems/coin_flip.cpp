#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//Declare variables
bool heads;				//Is the coin a heads (true) or a tails (false)?

int iterations;				//Int to store the number of times the coin will flip.
int outcome;				//Outcome from the pseudo-random number generator which will determine the coin's face.
int head_count=0;
int tail_count=0;

//Prototype functions
bool coin_flip(int iterations);		//Prototype function declaring the coin flipper.
int final_tally();

int main()
{
	//Call srand to initialize a random seed.
	srand(time(NULL));

	cout << "How many times would you like to flip the coin? \n";		//Ask the user how many times they would like to flip the coin.
	cin >> iterations;							//Store the user's response.
	cout << "Okay, let's flip the coin " << iterations << " times!\n";	//Echo user's submission.

	//Call the randomizing function
	coin_flip(iterations);
}

//Function to actually flip the coin.
bool coin_flip(int num)
{
	for(int i = 0;i <=num-1;i++)
	{
		outcome = rand();
		//Print statement to say if outcome is tails or heads; print it in two discrete statements to remain modular.
		cout <<"Coin flip #" << i+1 << " is ";	//Print first part
		if (outcome % 2 == 0)
			{
				cout << "heads!\n";
				head_count++;
			}
		else
			{
				cout << "tails!\n";
				tail_count++;
			}
	}
	final_tally();
}

//Function to display the final tally of each coin face.
int final_tally()
{
	cout<<"The final tally is " << head_count << " heads and " << tail_count << " tails!\n";
}
