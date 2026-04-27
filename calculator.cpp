//simple calculator
//description : basically gets input from the user and performs the task that user wants.

#include<iostream>
using namespace std;
int x,y;
char op;
int main(){
    cout<<"******************************************"<<endl;
    cout<<"                CALCULATOR"<<endl;
    cout<<"******************************************"<<endl;
    cout<<"INPUT A NUMBER: "<<endl;
    cin>>x;
    cout<<"FUNCTIONS YOU WANT TO PERFORM: \n + | - | * | / "<<endl;
    cin>>op;
    cout<<"ENTER OTHER NUMBER: "<<endl;
    cin>>y;
    switch (op)
    {
    case '+':
       cout<<x+y;
        break;
    case '-':
       cout<<x-y;
        break;
    case '*':
       cout<<x*y;
        break;
    case '/':
        if(y!= 0){
            cout<<x/y;
        }
        else{
            cout<<"INVALID: ZERO DIVISON ERROR";
        }
        break;
    default:
        cout<<"INVALID OPERATOR \n KINDLY CHOOSE BETWEEN + | - | * | /";
            break;
        }

    return 0;
}