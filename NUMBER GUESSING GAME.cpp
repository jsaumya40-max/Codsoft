#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int num = std::rand() % 10 + 1;
    int guess;

    do {
        std::cout << "Guess the number (1 to 10): ";
        std::cin >> guess;

        if (guess > num) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < num) {
            std::cout << "Too low! Try again.\n";
        }
    } while (guess != num);

    std::cout << "🎉 Congratulations! You guessed the number.\n";

    // Pause before exit
    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}