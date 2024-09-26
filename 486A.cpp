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
    optimize();
    ll n; cin >> n;
    ll sum = 0;
    if ( n % 2 == 0 ){
        sum = n / 2;
    }
    else{
        sum = -(n+1) / 2;
    }
    cout << sum << endl;

}