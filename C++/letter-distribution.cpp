#include <iostream>
#include <string>

using namespace std;

//Writing a program to accept a string as an argument, and then display the statistical distribution of the letters.

//Declaring variables and prototyping functions
string input_word;
string getWord();
void debug();
int getLength(string);
char getLetters(string);

enum Letters {	//Enumerate letters to eliminate off-by-one errors
	LETTER_A = 1,
	LETTER_B = 2,
	LETTER_C = 3,
	LETTER_D = 4,
	LETTER_E = 5,
	LETTER_F = 6,
	LETTER_G = 7,
	LETTER_H = 8,
	LETTER_I = 9,
	LETTER_J = 10,
	LETTER_K = 11,
	LETTER_L = 12,
	LETTER_M = 13,
	LETTER_N = 14,
	LETTER_O = 15,
	LETTER_P = 16,
	LETTER_Q = 17,
	LETTER_R = 18,
	LETTER_S = 19,
	LETTER_T = 20,
	LETTER_U = 21,
	LETTER_V = 22,
	LETTER_W = 23,
	LETTER_X = 24,
	LETTER_Y = 25,
	LETTER_Z = 26
	};


int main()
{
	getWord();	//Call the getWord function to get a word in the first place
	debug();	//Call the debug function to help troubleshoot
}


//Function to get a word from the user
string getWord()
{
	cout << "Enter a word for its letter distribution : \n";
	cin >> input_word ;
	return input_word ;
}

//Debug function to print existing variables
void debug()
{
	//Print variables to debug
	cout << "DEBUG:\n";
	cout << "input_word : "  << input_word << '\n';
	cout << "input_word length : " << getLength(input_word) << '\n';
}

//Function to get the length of the submitted word
int getLength(string word)
{
	return word.length();
}

//Function to enumerate each of the letters in the user-submitted word
char getLetters(string word)
{
	int i = 0;
	while (i < word.length())
	{
		cout << Letters(i+1) << '\n';
		i++;
	}
}
