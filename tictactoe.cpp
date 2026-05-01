#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int pos; // position krta for the array
int choice; //choice leta about the game 
char p1;//person 1
char p2;//person 2
char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int turn = 1;


void getinstructions(){
    cout<< "**********INSTRUCTION**********"<<endl;
    cout<<"1. PLAYER 1 WOULD START FIRST"<<endl;
    cout<<"2. PLAYER SHOULD ENTER NUMBERS BETWEEN 1-9 RANGE"<<endl;
    cout<<"3. PLAYER SHOULD MATCH THE SIDES OR DIAGONALS TO WIN ";
}


char getsymbol(){
    //this code block deals with the random number 
    unsigned int seed = static_cast<unsigned int>(time(0)); 
    // random number generator through usinhg ctime     
    mt19937 engine(seed); //engine start krta hai  
    uniform_int_distribution<> range(1, 6); // range define krta hai
    int rd = range(engine); //storing data in rd

    if(rd%2==0){
        cout<<"     PLAYER 1 : 'O' AND PLAYER 2 : 'X'"<<endl ; 
        p1='O';
        p2='X';
    }
    else{
        cout<<"     PLAYER 1 : 'X' AND PLAYER 2 : 'O'"<<endl ;
        p1='X';
        p2='O';
    }
    cout<<"*************************************************";
}


int getboard(){
    cout<<"_"<<board[0]<<"_|_"<<board[1]<<"_|_"<<board[2]<<"_"<<endl;
    cout<<"_"<<board[3]<<"_|_"<<board[4]<<"_|_"<<board[5]<<"_"<<endl;
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<" "<<endl;
}


int checkcondition(){
    if(board[0]!=' '&&board[0]==board[1] && board[1]==board[2])return 1;
    else if(board[3]!=' '&&board[3]==board[4] && board[4]==board[5]) return 1;
    else if(board[6]!=' '&&board[6]==board[7] && board[7]==board[8]) return 1;
    else if(board[2]!=' '&&board[2]==board[5] && board[5]==board[8]) return 1;
    else if(board[0]!=' '&&board[0]==board[3] && board[3]==board[6]) return 1;
    else if(board[1]!=' '&&board[1]==board[4] && board[4]==board[7]) return 1;
    else if(board[0]!=' '&&board[0]==board[4] && board[4]==board[8])return 1;
    else if(board[2]!=' '&&board[2]==board[4] && board[6]==board[2])return 1;
    return 0;
} 



int main(){
cout<<"********************************"<<endl;
cout<<"WELCOME TO TIC - TAC - TOE GAME "<<endl;
cout<<"********************************"<<endl;
cout << "  1. Play Game" << endl;
cout << "  2. Instructions" << endl;
cout << "  3. Exit" << endl;
cout << "Enter your choice: (NUMERIC VALUE ONLY)"<<endl;
cin >> choice;

if(cin.fail()){
    cin.clear();
    cin.ignore(1000,'\n');
    cout<<"PROVIDE APPROPRIATE DATA TYPE ";
}
else if(choice < 1 || choice > 3){
    cout<< "VALUE RANGE IS 1 -3 , RETRY!!";
}
else{
    

    switch (choice)
    {
    case 1:
        cout<<"**********READY TO PLAY, LET'S START !!**********"<<endl;
        getsymbol();cout<<endl;
        
        cout<<"KINLDY CHOOSE THE POSITION AS ACCORDINGLY \n";
        cout<< " _1_|_2_|_3_"<<endl;
        cout<<" _4_|_5_|_6_"<<endl;
        cout<<"  7 | 8 | 9 "<<endl;
        

    
        

        while(true){
            if(turn==1){
                cout<<"PLAYER 1's TURN: ";
                cin>>pos;

                if (cin.fail()){
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"USE A VALID DATA TYPE (NUMBERS)"<<endl;
                continue;}

                if(pos<1 || pos>9){
                    cout<<"KINDLY ENTER NUMBER BETWEEN 1-9"<<endl;
                    continue;
                }

                if(board[pos-1]==' '){
                board[pos - 1] = p1;
                getboard();

                if(checkcondition()==1){
                    cout<<"*****************"<<endl;
                    cout<<"YE YOU WON!!"<<endl;
                    cout<<"*****************"<<endl;
                    break;
                }
                
                turn = (turn == 1) ? 2 : 1;
                }
                else{
                    cout<<"SPACE ALREADY BEING OCCUPIED!";
                }

            }
            else if(turn ==2){
                cout<<"PLAYER 2's TURN: ";
                cin>>pos;

                if (cin.fail()){
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"USE A VALID DATA TYPE (NUMBERS)"<<endl;
                continue;
                }

                if(pos<1 || pos>9){
                    cout<<"KINDLY ENTER NUMBER BETWEEN 1-9"<<endl;
                    continue;
                }

                if(board[pos-1]==' '){
                    board[pos - 1] = p2;
                    getboard();
                    // checkcondition();
                    
                if(checkcondition()==1){
                    cout<<"*****************"<<endl;
                    cout<<"YE YOU WON!!"<<endl;
                    cout<<"*****************"<<endl;
                    break;
                }
                
                    turn = (turn == 2) ? 1 : 2;
                }
                else{
                    cout<<"SPACE ALREADY BEING OCCUPIED!";
                    continue;
                }
            }
        }

        break;
    case 2:
        getinstructions();
        break;
    case 3:
        cout<<"THANKS FOR PLAYING"<<endl;
        break;

    default:
        break;
    }
}
    return 0;
}
