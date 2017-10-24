#include <iostream>
#include <time.h>
#include <stdlib.h>
#define BONES NULL

using namespace std;

int main() {
	srand(time(BONES));
	int guess = rand() % 100 + 1;
	int guessed = 0;
	int guessedNumber;

	while (guessed == 0) {
		cout << "Let's play guess the number!\nGuess the number I'm thinking of between 1 and 100!" << endl;
		cin >> guessedNumber;
		do {
			if (guessedNumber == guess) {
				system("CLS");
				cout << "Congrats! You guessed my number! It was " << guessedNumber << "." << endl;
				guessed = 1;
			}
			else if (guessedNumber != guess) {
				system("CLS");
				cout << "Nope! My number was not " << guessedNumber << ". Try again!" << endl;
				cin >> guessedNumber;
			}
			else {
				cout << "error" << endl;
				return 0;
			}
		} while (guessed != 1);
		cout << "Goodbye!" << endl;
	}
}