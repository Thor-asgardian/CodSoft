#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator with the current time
    std::srand(std::time(0));
    number = std::rand() % 100 + 1;

    std::cout << "Welcome to the Number Guessing Game!\n";// To get the welcome message
    std::cout << "I have chosen a number between 1 and 100.\n";// Server's messages
    std::cout << "Can you guess what it is?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > number) {
            std::cout << "The number is less than " << guess << ". Try again.\n";
        } else if (guess < number) {
            std::cout << "The number is greater than " << guess << ". Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the number " << number << " in " << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}
