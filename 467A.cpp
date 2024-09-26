#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define lld long long double
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
// stl function.
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<pii>v;

    while( n-- ){
        int p , q;
        cin  >> p >> q;
        v.pb({p , q});
    }
    int cnt = 0;
    for( auto u : v ){
        int sum = abs(u.second -u.first);
        if( sum >= 2 )cnt++;
    }
    cout << cnt << endl;
}