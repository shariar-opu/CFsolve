#include<bits/stdc++.h>
using namespace std;
int main()
{
    double div,sum=1;
    for(int i=2;i<=100;i++){
        div=(double)1/i;
        sum=sum+div;
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}