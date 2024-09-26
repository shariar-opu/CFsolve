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
#define fi(s,e) for( int i = s; i < e; ++i )
#define fj(s,e) for( int j = s; j < e; ++j )
int mxN = 10e5;
using namespace std;
int main()
{
    optimize();
    vector<int>v,cnt;
    map<int,int>m;
    int n; cin >> n;
    int a[n];
    fi(0,n){
        cin >> a[i];
        int ans = a[i];
        if( a[i] - 1 == ans )  m[ans]++;
        else if( a[i] + 1 == ans ) m[ans]++;
        else if(a[i] == ans) m[ans]++;
    }
    for(auto u : m) cout << u.first << " " << u.second << endl;
    // cout << endl;
    cerr << "time = " << clock() << " ms" << '\n';
}