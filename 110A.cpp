#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    ll n;
    int cnt =0;
    cin >> n;
    while(n > 0){
        ll r = n%10;
        if(r == 4 || r == 7){
            cnt++;
        }
        n/=10;
    }
    if(cnt ==4 || cnt ==7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
}