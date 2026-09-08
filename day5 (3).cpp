#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int playerChoice, computerChoice;

    // Seed random number generator
    srand(time(0));

    cout << "===== Rock Paper Scissors =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> playerChoice;

                                      
    // Generate computer choice (1-3)
    computerChoice = rand() % 3 + 1;

    cout << "\nYou chose: ";
    if (playerChoice == 1)
        cout << "Rock";
    else if (playerChoice == 2)
        cout << "Paper";
    else if (playerChoice == 3)
        cout << "Scissors";
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "\nComputer chose: ";
    if (computerChoice == 1)
        cout << "Rock";
    else if (computerChoice == 2)
        cout << "Paper";
    else
        cout << "Scissors";

    // Determine winner
    cout << "\n\nResult: ";

    if (playerChoice == computerChoice) {
        cout << "It's a draw!";
    }
    else if ((playerChoice == 1 && computerChoice == 3) ||
             (playerChoice == 2 && computerChoice == 1) ||
             (playerChoice == 3 && computerChoice == 2)) {
        cout << "You win!";
    }
    else {
        cout << "Computer wins!";
    }

    cout << endl;

    return 0;
}
