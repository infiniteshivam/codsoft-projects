#include <iostream>
#include <random>
#include <string>
#include <algorithm>
#include <ctime> // time(0) ke liye zaroori hai

using namespace std;

int main() {
    // 1. Seed ko Time-based banaya taaki har baar naya number aaye
    // time(0) computer ki clock se seconds uthata hai
    unsigned int seed = static_cast<unsigned int>(time(0));
    // random_device seed; could use this but it does'nt work
    mt19937 engine(seed); 
    //magic happens
    
    string inp;
    cout << "========================================" << endl;
    cout << "   WELCOME TO THE NUMBER GUESSING GAME  " << endl;
    cout << "========================================" << endl;
    cout << "INSTRUCTION: GUESS THE NUMBER TO WIN!" << endl;
    cout << "CHOOSE DIFFICULTY: EASY | MEDIUM | HARD" << endl;
    cout << "-> ";
    cin >> inp;

    // 2. Input ko lowercase karna taaki "EASY" ya "easy" dono chalein
    transform(inp.begin(), inp.end(), inp.begin(), ::tolower);

    if (inp == "easy") {
        cout << "\n[LEVEL: EASY] Range: 1 to 20" << endl;
        
        // 3. Distribution aur Random Number generation
        uniform_int_distribution<> range(1, 20);
        int rd = range(engine); 
        
        int x = 0;      // User ka guess (initialized to 0)
        int count = 0;  // Attempts count karne ke liye

        // DEBUG: Is line ko hata dena agar asli game khelna hai
        // cout << "(Secret Number: " << rd << ")" << endl; 

        cout << "LETS BEGIN! Guess a number between 1-20:" << endl;

        //  Game Loop
        while (x != rd) {
            cout << "-> ";
            cin >> x;
            count++; 

            if (x < rd) {
                cout << "BIT MORE! Try again." << endl;
            } 
            else if (x > rd) {
                cout << "BIT LESS! Try again." << endl;
            } 
            else {
                cout << "\n*** YE GUESSED IT RIGHT!!! ***" << endl;
                cout << "TOTAL ATTEMPTS: " << count << endl;
            }
        }
    } 
    else if(inp =="medium"){
        cout<<"\n[LEVEL: MEDIUM] RANGE - 1 TO 30 ";
        
        uniform_int_distribution<>range(1,30);
        int rd = range(engine);

        int x=0;
        int count =0;
        cout<<"LETS BEGIN! Guess a number between 1-20: " << endl;
        while(x!=rd){
            cout<<"->";
            cin>>x;
            count ++;

             if (x < rd) {
                cout << "BIT MORE! Try again." << endl;
            } 
            else if (x > rd) {
                cout << "BIT LESS! Try again." << endl;
            } 
            else {
                cout << "\n*** YE GUESSED IT RIGHT!!! ***" << endl;
                cout << "TOTAL ATTEMPTS: " << count << endl;
            }
        }
    }
    else if(inp == "hard"){
        cout<<"================================"<<endl;
        cout<<" WELCOME TO THE HARDEST LEVEL"<<endl;
        cout<<"================================"<<endl;

        cout<<"\n[LEVEL: HARD] RANGE - 1 TO 50 ";
        
        uniform_int_distribution<>range(1,50);
        int rd = range(engine);

        int x=0;
        int count=0;
        cout<<"LETS BEGIN! Guess a number between 1-50: " << endl;

        while(x!=rd){
            cout<<"->";
            cin>>x;
            count ++;

             if (x < rd) {
                cout << "BIT MORE! Try again." << endl;
            } 
            else if (x > rd) {
                cout << "BIT LESS! Try again." << endl;
            } 
            else {
                cout << "\n*** YE GUESSED IT RIGHT!!! ***" << endl;
                cout << "TOTAL ATTEMPTS: " << count << endl;
            }
        }
    }

    return 0;
}