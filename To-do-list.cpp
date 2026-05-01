//to do list banana hai guizz

#include <iostream>
using namespace std;
int noofwork;
string work;
string y;
int pendingwork(){
    cout<<"ENTER THE NUMBER OF PENDING WORKS: "<<endl;
    cin>>noofwork;
    cin.ignore();
    string workarray[noofwork];
    cout<<"LIST THE PENDING WORKS: "<<endl;
    for(int i=0;i<noofwork;i++){
        cout<<i+1<<' ' ;
        getline(cin,workarray[i]);
    }
   cout<<y;
}




int main(){
    cout<<"*****************************"<<endl;
    cout<<" TO - DO - LIST"<<endl;
    cout<<"*****************************"<<endl;
    pendingwork();
    
    return 0;
}