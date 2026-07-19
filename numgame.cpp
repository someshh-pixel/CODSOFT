#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int  guess, randomNumber;
      srand(time(0));

    
    randomNumber = rand() % 100 + 1;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"   << endl;
    cout << "     GUESS THE NUMBER CHALLENGE    " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"   << endl;
    cout << "Choose a number between 1 and 100."  << endl;

    do {
        cout << "\nEnter your guess number: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << " OOPS! Too High!Try Again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "OOPS! Too Low!Try Again." << endl;
        }
        else {
            cout << "\n Congratulations! You guessed the correct number: "
                 << randomNumber << endl;
            cout << "Thanks for playing!" << endl;
        }

    } while (guess != randomNumber);

    return 0;
}