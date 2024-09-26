#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define si multiset<int>
#define usi unordered_set<int>
#define msi set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vii vector<pii>
#define sii set<pii>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
bool vis[N];
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        vector<pii>v;
        int n;
        cin >> n;
        fi(0, n)
        {
            int a, b;
            cin >> a >> b;
            v.pb({a,b});
        }
        bool ok = 1;
        int mx1 = v[0].first;
        int mx2 = v[0].second;
        fi(1,v.size()){
            if(v[i].first >= mx1){
                if(v[i].second >= mx2) ok = 0;
                else continue;
            }
            else continue;
        }
        if(ok) dn(mx1);
        else dn(-1);
       
    }
}