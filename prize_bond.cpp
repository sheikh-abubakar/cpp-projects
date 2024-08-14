#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string filename;
    cout<<"enter your file name"<<endl;
    cin>> filename;

    ifstream myfile;
    myfile.open(filename);

    int num = 0;
    int bond_num = 0;

    cout<<"Enter your bond Number"<<endl;
    cin>>bond_num;

    while(myfile.good()){
        myfile>>num;
        if(num == bond_num){
            cout<<"***Congratulations! You Won a Prize***"<<endl;
            cout<<"Your number matches with "<<num<<endl;
            break;
        }
        num++;
    }
    if(num != bond_num){
        cout<<"Bad Luck! Try Next time.";
    }

    return 0;
}