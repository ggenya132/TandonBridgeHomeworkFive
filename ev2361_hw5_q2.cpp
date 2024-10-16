#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4;

    srand(time(0));
    x1 = rand();
    x2 = rand();
    x3 = rand() % 100;
    x4 = (rand() % 100) + 1;

    int targetNumber = x4;
    int numberOfAttemptsRemaining = 5;
    int left = 1;
    int right = 100;

    // cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    int currentGuess;
    while (numberOfAttemptsRemaining > 0) {
        numberOfAttemptsRemaining--;

        cout << "Range [" << left << ", " << right << "], "
             << "Number of guesses left:" << numberOfAttemptsRemaining + 1
             << endl;
        cout << "Your guess:";
        cin >> currentGuess;
        if (currentGuess == targetNumber) {
            cout << "Congrats! You guessed my number in "
                 << 5 - numberOfAttemptsRemaining << " guesses.";
            break;
        }
        if (currentGuess < targetNumber) {
            if (currentGuess > left) {
                left = currentGuess;
            }
            if (numberOfAttemptsRemaining == 0) {
                cout << "Out of guesses! My number is " << targetNumber;
            } else {
                cout << "Wrong! My Number is bigger.";
            }
        }
        if (currentGuess > targetNumber) {
            if (currentGuess < right) {
                right = currentGuess;
            }
            if (numberOfAttemptsRemaining == 0) {
                cout << "Out of guesses! My number is " << targetNumber;
            } else {
                cout << "Wrong! My number is smaller";
            }
        }
    }

    return 0;
}