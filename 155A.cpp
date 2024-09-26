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
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int n; cin >> n;
    int cnt = 0;
    int a[n];
    fi(0,n) cin >> a[i];

    int mx = 0, mn = 0;
    mx = a[0];
    mn = a[0];
    fi(0,n){
        if(a[i] > mx) {
            mx = a[i];
            cnt++;
        }
        if(a[i] < mn){
            mn = a[i];
            cnt++;
        }
        
    }
    dn(cnt);
}