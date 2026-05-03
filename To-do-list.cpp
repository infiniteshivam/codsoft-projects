//to do list banana hai guizz
#include <vector>
#include <iostream>
using namespace std;
int noofwork;
string work;
int choose;
string s;
vector<string>workarray;

int pendingwork(){
    cout<<"ENTER THE NUMBER OF PENDING WORKS: "<<endl;
    cin>>noofwork;
    cin.ignore();
    cout<<"LIST THE PENDING WORKS: "<<endl;
    for(int i=0;i<noofwork;i++){
        cout<<i+1<<' ' ;
        getline(cin,s);
        workarray.push_back(s);
    }
}

int currentwork(){ 
    cout<<"******************"<<endl;
    cout<<"PENDING WORKS ARE:"<<endl;
    cout<<"******************"<<endl;
    for(int i=0;i<workarray.size();i++){
        cout<<1+i<<". ";
        cout<<workarray[i]<<endl;
    }
}

int workupdate(){
    cout<<"SELECT THE WORK THAT HAS BEING DONE FROM ABOVE"<<endl;
    currentwork();
    int num;
    cin>>num;
    int indexn=num-1;
    if (indexn >= 0 && indexn < workarray.size()) {
        workarray.erase(workarray.begin() + indexn);
        cout << "WORK REMOVED SUCCESSFULLY!" << endl;
    } else {
        cout << "INVALID SERIAL NUMBER!" << endl;
    }
    
}


int main(){
   
    cout<<endl;
    cout<<"*****************************"<<endl;
    cout<<" TO - DO - LIST"<<endl;
    cout<<"*****************************"<<endl;
    while (true)   
    { 
    cout<<"CHOOSE THE ACTIONS TO PERFORM: (sr. no.) "<<endl;
    cout<<"1. LIST THE WORK "<<endl;
    cout<<"2. MARK WORK AS DONE "<<endl;
    cout<<"3. PENDING WORKS "<<endl;
    cout<<"4. EXIT"<<endl;
    cin>>choose;
    cin.ignore();

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"CHOOSE VALID NUMERIC VALUE FROM SERIAL NUMBER";
    }

    if(choose<0 || choose>4 ){
        cout<<"THEIR ARE ONLY 4 OPTIONS AVAILABLE!";
    };

        
    switch (choose)
    {
    case 1:
        pendingwork();
        cout<<"LISTED!! (FOR MENU PRESS 1)"<<endl;
        int in;
        cin>>in;
        if(in==1){
             break;}
        else{
            cout<<"TAKE TIME...LIST ALL THE WORK!!"<<endl;
            continue;
        }

    case 3:
        currentwork();
        break;
    case 2:
        workupdate();
        break;
    case 4:
        cout<<"HOPE ALL YOUR WORK ARE BEING DONE, SEE YA!!";
        return 0;
    }
}
    
    return 0;
}