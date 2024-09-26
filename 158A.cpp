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
#define psi pair<string,int>
using namespace std;
int main()
{
    optimize();
    int n,k;
    cin >> n >> k;
    int ans[n];

    for( int i = 0; i < n; i++ ){
        cin >> ans[i];
    }
    int cnt = 0;
    for( int i = 0; i< n; i++ ){
        if( ans[i] > 0 ){
            if( ans[k-1] <= ans[i] ) cnt++;
        }
    }
    cout << cnt << endl;
}