#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int r,g;
    cout<<"Enter guss between 1 to 5 = ";
    cin>>g;
    r=1+rand()%5;

    if(r==g){
        cout<<"You have won."<<endl<<endl;
    }
    else{
        cout<<"You have lost.Try again..."<<endl;
        cout<<"Random number was = "<<r<<endl<<endl;
    }
 }
 
}