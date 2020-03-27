#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    cout << "Enter 3 scores: \n";
    double score1, score2, score3;
    cin >> score1 >> score2 >> score3;
    double average = (score1 + score2 + score3) / 3;
    cout << "The average of scores " << score1 << ", " << score2 << ", " << score3 << " is: " << average << endl; 
    return 0;
}
