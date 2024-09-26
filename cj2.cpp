#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define f first
#define s second
#define ll long long
#define pb push_back
#define pi (3.141592653589)
#define V vector<long long>
#define all(v) v.begin(), v.end()
#define fr(suru, ses) for (int i = suru; i < ses; i++)



void solve(int t,int tc){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll mod=1e9+7;
    ll x=a*b;
    x%=mod;
    x*=c;
    x%=mod;
    x*=d;
    string temp;
    temp=to_string(x);
    cout<<temp[temp.size()-2]<<temp.back();
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    fr(1, t + 1) solve(i, t);
    return 0;
}