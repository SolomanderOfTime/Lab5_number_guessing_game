// Made: 11/2/23 // By: Alexander J. Blasnitz // RANDOM NUMBER GAME

//includes the standard libary.
#include <iostream>                                    
#include <string>
using namespace std;

int main() {
	srand(time(NULL));
	int tries = 20;
	int wins = 0;
	int looses = 0;
	int numAns;

	cout << "WELCOME! TO THE NUMBER GUESSING GAME\n---------------------------------------------------------" << endl;

	bool continueGame = true;
	while (continueGame) {
		int ranNum = rand() % 100 + 1;
		int phrase = rand() % 5;
		cout << "guess a number between 0-100 : ";
		cin >> numAns;

		if (numAns == ranNum) {
			cout << "you win " << "your wins: " << wins << " your looses: " << looses << endl;
			wins++;

		}
		else if (tries == 0) {
			cout << "you loose " << "your wins: " << wins << " your looses: " << looses << endl;
			looses++;
			cout << "Do you want to continue? Enter Y or N: ";
			char choice;
			cin >> choice;

			if (choice == 'N' || choice == 'n') {
				cout << "Here are your wins: " << wins << "| Here are your fails: " << looses << "|" << endl;
				cout << "I hope you enjoyed the game :)" << endl;
				continueGame = false;
			}
			else {
				tries = 20;
			};
		}
		else if (numAns != ranNum) {
			switch (phrase)
			{
			case 0:
				cout << "sorry got that one wrong. ";
				break;

			case 1:
				cout << "ouch you got that one wrong freind try again ";
				break;

			case 2:
				cout << "well sorry to say it but you got that one wrong. ";
				break;

			case 3:
				cout << "well I unfortunatly have to say incorrecto on that answer captin. ";
				break;

			default:
				cout << "no luck this time. ";
				break;
			};
			cout << " minus 1 trie: " << tries << endl;
			tries--;
		};

		};
	};