#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n/100<<" ta note 100 takar"<<endl;
    n=n%100;
    cout<<n/50<<" ta note 50 takar"<<endl;
    n%=50;
    cout<<n/20<<" ta note 20 takar"<<endl;
    n=n%20;
    cout<<n/10<<" ta note 10 takar"<<endl;
    n=n%10;
    cout<<n/5<<" ta note 5 takar"<<endl;
    n=n%5;
    cout<<n/2<<" ta note 2 takar"<<endl;
    n=n%2;
    cout<<n/1<<" ta note 1 takar"<<endl;
}
