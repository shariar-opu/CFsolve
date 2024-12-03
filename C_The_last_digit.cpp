#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>l[10];
void sol(){
    ll a,b;cin>>a>>b;a%=10;
    if(!a)cout<<0<<'\n';
    else if(!b)cout<<1<<'\n';
    else cout<<l[a][((b-1)%4)]<<'\n';
}
int main(){
    for(ll i=0;i<10;i++)for(ll j=1;j<5;j++)l[i].push_back((ll)round(pow(i,j))%10);
    ll t;cin>>t;
    while(t--)sol();
}