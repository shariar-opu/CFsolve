#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,sum=0,count=0;
    cin>>x>>z;
    for(int i=0;;i++){
        if(x<z){
            break;
        }
        else{
            cin>>z;
            for(int j=x;;j++){
             sum+=j;
             ++count;
             if(sum>=z){
                 break;
                }
            }
        }
    }
    cout<<count<<endl;   
}
