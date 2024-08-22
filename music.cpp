#include<iostream>
#include<Windows.h>
#include<mmsystem.h>
#include <string>
using namespace std;


#pragma comment(lib, "winmm.lib")

int main(){
cout<<"Nasheed is playing"<<endl;
 PlaySound(TEXT("Nasheed.wav"), NULL,  SND_FILENAME | SND_ASYNC | SND_LOOP);

string s;

getline(cin, s);

PlaySound(0, 0, 0);

cout<<"stopped music";
getline(cin, s);
cout<<"Nasheed is playing"<<endl;

PlaySound(TEXT("Nasheed.wav"), NULL,  SND_FILENAME | SND_ASYNC | SND_LOOP);

return 0;
}