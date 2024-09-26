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
#define dn cout << cnt << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int t; cin >> t;
    while(t--){
        vector<int>v,v2;
        int n; cin >> n;
        while(n != 0){
            int r = n%10;
            n/=10;
            v.pb(r);
        }
        fi(0, v.size()){
            if(v[i] == 0)continue;
            else{
                v2.pb(v[i]*pow(10,i));
            }
        }
        sort(v2.rbegin(), v2.rend());
        cout << v2.size() << endl;
        fe(u,v2) cout << u << " ";
        cout << endl;
    }
}