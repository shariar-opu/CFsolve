#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fn for( int i = 0; i < n; ++i );
using namespace std;
int main()
{
    optimize();
    ll n, m , a;
    cin >> n >> m >> a;

    ll  k , p;
    
    if( m%a==0 ) k = m / a;
    else k = (m / a)+1;
    if(n%a==0) p = n / a;
    else p = (n / a)+1;

    cout <<k * p << endl;
}