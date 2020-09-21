#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
	int level;
	int guessRange;
	std::cout << "Welcome to guess a number game!\n\n";
	std::cout << "1. Easy (1-5)\n";
	std::cout << "2. Medium (1-15)\n";
	std::cout << "3. Hard (1-30)\n";
	std::cin >> level;

	if (level == 1) {
		guessRange = 5;
	}
	else if (level == 2) {
		guessRange = 15;
	}
	else if (level == 3) {
		guessRange = 30;
	}
	else {
		std::cout << level << " is not a valid level :)";
		return 0;
	}

	srand(time(NULL));
	int num = rand() % guessRange + 1;
	int guess = -1;
	int tries = 0;

	do {
		std::cout << "Guess a number 1- " << guessRange << ":";
		std::cin >> guess;
		tries++;

		if (guess > num) {
			std::cout << "Too high!\n";
		}
		else if (guess < num) {
			std::cout << "Too low!\n";
		}
		else {
			std::cout << "Correct! you got it in " << tries << " guesses!";
		}

	} while (guess != num);

}