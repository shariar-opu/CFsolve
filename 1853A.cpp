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
#define dn cout << cnt << endl;
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        bool mn = 1;
        fi(0,n){
            cin >> a[i];
        }
        int ans = 1e9;
        fi(0,n-1){
             if(a[i+1] < a[i]) {
                mn = 0;
                break;
             }
             else ans = min(ans , 1+(a[i+1]-a[i])/2);
        }
        if(mn == 0) cout << "0" << endl;
        else cout << ans <<  endl;
    }
}