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
    int n;
    cin >> n;
    
    vector<pair<int , int>>m;
    
    for(int  i = 0; i < n; i++ ){
        int a;
        cin >> a;
        m.pb({a,i});
    }
    sort( m.begin(), m.end());
    for( auto u : m ){
        // cout << u.first << " " << u.second << endl;
        cout << u.second +1 << " ";
    }
    cout << endl;
}