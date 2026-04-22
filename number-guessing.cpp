#include <iostream>
#include <random>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // random_device seed;
    // mt19937 engine(seed());
    // uniform_int_distribution<> range(1, 6); // Ludo ka Dice
    string inp;
    cout<<"WELCOME TO THE NUMBER GUESSING GAME\n";
    cout<<"INSTRUCTION: YOU HAVE TO GUESS THE NUMBER \n";
    cout<<"CHOOSE THE DIFFICULTY LEVEL: \n EASY \n MEDIUM \n HARD\n\n ->";
    cin>>inp;
    transform(inp.begin(),inp.end(),inp.begin(),::tolower);
    cout<<inp;
    if(inp == "easy"){
        cout<<"\nYOU CHOOSED (LEVEL > EASY)\n";
        cout<<"LETS BEGIN!!";
        int x;
        int count=0;
        random_device seed;
        mt19937 engine(seed());
        uniform_int_distribution<> range(1, 20);
        cout<<"CHOOSE A NUMBER BETWEEN(0-20): \n";
        while(x!=range(engine)){
        cin>>x;  
        if(x<range(engine)){
            cout<<"BIT MORE!";
        }
        else if(x>range(engine)){
            cout<<"BIT LESS!";
        } 
        else{
            cout<<"YE GUESSED IT RIGHT!!!";
            break;
            
        }count++;
        
    }
    cout<<"ATTEMPTS : "<<count;
}
    

    // for(int i = 0; i < 5; i++) {
    //     // Sirf distr(gen) baar-baar bulao
    //     cout << "Dice Roll " << i+1 << ": " << range(engine) << endl;
    // }
    return 0;
}

