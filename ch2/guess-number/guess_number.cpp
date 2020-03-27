#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {
   srand(time(NULL));
   int r = rand() % 10 + 1;
   int tries = 5;
   cout << "Guess the number I'm thinking about.\nYou have three tries.\nIt is between 1-10.\n";
   int guess;
   while (tries != 0) {
    cin >> guess;
    tries--;
    if (guess < r) cout << "Too low.\n";
    else if (guess > r) cout << "Too high.\n";
    else {
        cout << "Congratulations! " << guess << " is the correct guess!\n";
        break;
    }
   }
   if (tries == 0) cout << "I'm sorry, you're out of tries. You've lost, goodbye!\n";

    return 0;
}
