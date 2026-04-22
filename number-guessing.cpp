#include <iostream>
#include <random>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    random_device seed;
    mt19937 engine(seed());
    uniform_int_distribution<> range(1, 6); // Ludo ka Dice
    string inp;
    cout<<"WELCOME TO THE NUMBER GUESSING GAME\n";
    cout<<"INSTRUCTION: YOU HAVE TO GUESS THE NUMBER \n";
    cout<<"CHOOSE THE DIFFICULTY LEVEL: \n EASY \n MEDIUM \n HARD";
    if(inp == "EASY"){

    }
    

    for(int i = 0; i < 5; i++) {
        // Sirf distr(gen) baar-baar bulao
        cout << "Dice Roll " << i+1 << ": " << range(engine) << endl;
    }
    return 0;
}

