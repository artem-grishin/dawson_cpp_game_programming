#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {

    enum difficulty_level {EASY = 1, NORMAL, HARD};
    int choice;
    cout << "Choose you difficulty level =>\n\n";
    cout << "Choose 1 for Easy\nChoose 2 for Normal\nChoose 3 for Hard\n";
    cin >> choice;

    switch (choice) {
        case EASY :
            cout << "You've chosen easy.\n";
            break;
        case NORMAL : 
            cout << "You've chosen normal.\n";
            break;
        case HARD : 
            cout << "You've chosen hard.\n";
            break;
        default:
            cout << "Incorrect Entry!\n";
    }
    
    return 0;
}
