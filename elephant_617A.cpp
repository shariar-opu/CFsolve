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

int main()
{
    optimize();
    int x;
    cin >> x;
    if( x % 5 == 0 ) cout << x/5 << endl;
    else cout << (x / 5) + 1 <<endl;
}
