#include<bits/stdc++.h>
using namespace std;
int main(){
    int age,sum=0,count=0;
    float avg;
    for(int i=1;;i++){
        cin>>age;
        if(age<0){
            break;
        }
        else{
            sum+=age;
            ++count;
        }
    }
    avg=(float)sum/count;
    cout<<fixed<<setprecision(2)<<avg<<endl;
}