#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
int main()
{
    optimize();
  float num,sum=0;
  int count=0;
  for(int i=1;;i++){
    cin>>num;
    if(num>=0 && num<=10){
        ++count;
        sum+=num;
        if(count==2){
            break;
        }
    }
    else{
        cout<<"nota invalida"<<endl;
    }
  }
  cout<<"media = "<<sum/2<<endl;
}