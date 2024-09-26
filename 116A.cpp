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
    optimize();
   vector< pair<int ,int>>p;
   vector<int>v;
    int n; cin >> n;
    while( n-- ){
        int a,b;
        cin >> a >> b;
        p.pb({a,b});
    }
    int sum = 0;
    for( auto u : p ){
        sum += u.second;
        sum -= u.first;
        v.pb(sum);
    }
    int min = INT_MIN;
    for( auto u : v ){
        if( min < u ) min = u;
    }
    cout << min << endl;
}
int main()
{
    solve();
}