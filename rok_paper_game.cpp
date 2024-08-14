#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));

    int user = 0;
    int CPU = 0;

    cout<<"***Rock Paper Scissors Game!***\n";
    cout<<"1) Rock\n";
    cout<<"2) Paper\n";
    cout<<"3) Scissors\n";
    cout<<"Enter your Try"<<endl;
    cin>>user;
    //Test Cases

    if(user == 1){
        cout<<"You Choosed Rock"<<endl;
    }
    else if(user == 2){
        cout<<"You Choosed Paper"<<endl;
    }
    else if(user == 3){
        cout<<"You Choosed Scissors"<<endl;
    }
    if(user >= 1 && user <= 3){
        CPU = rand()%3+1;

    if(CPU == 1){
        cout<<"CPU Choosed Rock"<<endl;
    }
    else if(CPU == 2){
        cout<<"CPU Choosed Paper"<<endl;
    }
    else if(CPU == 3){
        cout<<"CPU Choosed Scissors"<<endl;
    }
    }
    else{
        cout<<"Wrong Try!";
    }
    
    //Match Begins

    if(user == CPU){
        cout<<"It's a tie match!";
    }
    //User chooses Rock
    else if(user==1){
        if(CPU == 2) {cout<<"Opps!You Lost";}
        else if(CPU == 3) {cout<<"Hurrah! You Win";}
    }
    //User chooses Paper
    else if(user==2){
        if(CPU == 3) {cout<<"Opps!You Lost";}
        else if(CPU == 1) {cout<<"Hurrah! You Win";}
    }
    //User chooses Scissors
    else if(user==3){
        if(CPU == 1) {cout<<"Opps!You Lost";}
        else if(CPU == 2) {cout<<"Hurrah! You Win";}
    }

    return 0;
}