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
    set<int> v;
    while ( n-- ){
        int a;
        cin >> a;
        v.ins(a);
    }
    bool ans = false; 
    for( auto u : v ){
        if( u == 1 ) ans = true;
    }
    if(ans) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}