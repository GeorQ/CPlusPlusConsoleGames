#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int numberToGuess = rand(); 
	int guess;
	int numberOfAttempts = 10;

	do
	{
		cout << "You have " << numberOfAttempts << " number of attempts. Guess the number: ";
		cin >> guess;
		if (guess == numberToGuess)
		{
			cout << "You guessed the number!!!\n";
			break;
		}
		else if (guess > numberToGuess)
		{
			cout << "Take less!\n";
		}
		else
		{
			cout << "Take more!\n";
		}
		if (--numberOfAttempts <= 0)
		{
			cout << "Game Over!\n";
			break;
		}

	} while (true);
}
