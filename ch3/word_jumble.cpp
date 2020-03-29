#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (int argc, char *argv[]) {
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS [NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you're banging your head against smoething?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    }

    //pick rand word from these choices
    srant(time(NULL));
    int choice = rand() % NUM_WORDS;
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    //jumble the word
    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; ++i) {
        int index1 = rand() % length;
        int index2 = rand() % length;
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    //welcome
    cout << "


        
    return 0;
}
