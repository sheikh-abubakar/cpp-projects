#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main(){
    srand(time(0));

    int num = 0;
    int heads = 0;
    int tails = 0;
    char s;
    string filename;
    ofstream my_file;
    cout<<"Let's Started with the Toss Coin Stimulator!"<<endl;
    cout<<"\n";
    cout<<"Do you wanna Save this file Y/N ?"<<endl;
    cout<<"\n";
    cin>> s;
    if(s == 'y' || s == 'Y')
    {
        cout<<"Enter File Name :"<<endl;
        cin>>filename;
        my_file.open(filename);
    }
    cout<<"0 is for Tails"<<endl;
    cout<<"1 is for Heads"<<endl;

    cout<<"\n";

    cout<<"How many times don you want to flip the coin?"<<endl;
    cout<<"\n";
    cin>> num;

    vector <int> Toss(num);

    for(int i = 0; i < Toss.size(); i++)
    {   
        Toss[i] = rand()%2;
        if(Toss[i] == 0){
            if(s == 'y' || s == 'Y'){
                my_file<<"Tails "<<Toss[i]<<endl;
            }
            tails++;
        }
        else if(Toss[i] == 1){
            if(s == 'y' || s == 'Y'){
                my_file<<"Heads "<<Toss[i]<<endl;
            }
            heads++;
        }
    }
    cout<<"According to the law of Large Nmubers !"<<endl;
    cout<<endl;
    cout<<"Total tosses are "<<Toss.size()<<endl;
    cout<<"Heads "<< heads <<endl;
    cout<<"Tails "<< tails <<endl;
    my_file.close();
    return 0;
}