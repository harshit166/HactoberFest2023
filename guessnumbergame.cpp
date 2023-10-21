#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0)); // Initialize random seed

    int lower = 1;
    int upper = 100;
    int numberToGuess = rand() % (upper - lower + 1) + lower;
    int guess;
    int attempts = 0;
    bool guessed = false;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I'm thinking of a number between " << lower << " and " << upper << "." << std::endl;

    while (!guessed) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < lower || guess > upper) {
            std::cout << "Please enter a number between " << lower << " and " << upper << "." << std::endl;
        } else if (guess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            guessed = true;
            std::cout << "Congratulations! You guessed the number " << numberToGuess << " in " << attempts << " attempts!" << std::endl;
        }
    }

    return 0;
}
