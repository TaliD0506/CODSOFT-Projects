#include<iostream>
using namespace std;

int main() {

	int computerGuess = 6;

	cout << "  THE ULTAMITE NUMBER GUESSING GAME!" << endl;
	cout << "  ----------------------------------" << endl;
	cout << "    Now its time for you to guess it. " << endl;
	cout << "                                      " <<endl;

	int usersGuess = 0;

	cout << "               Hint!!!               " << endl;
	cout << "                                     " << endl;
	cout << "  The number is between 1 and 10.    " << endl;


	while (true) {
		cout << "  Enter your guess: ";
		cin >> usersGuess;


		if (usersGuess == computerGuess) {
			cout << "  Well Done!!! You guessed it right. " << endl;
			break;
		}
		else if (usersGuess < computerGuess) {
			cout << "  Your guess is too low. Try again. " << endl;
		}
		else {
			cout << "  Your guess is too high. Try again. " << endl;
		}
	}
	return 0;
}
