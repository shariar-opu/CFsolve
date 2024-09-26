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
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
#define time cerr << "time = " << clock() << " ms" << endl
const int MX = 1e7 + 123;
bool vis[MX];
int main()
{
    optimize();
    ll n;    cin >> n;
    int k;  cin >>k;
    vector<ll> arr(k);
    fi(0,k) cin >> arr[i];
    vi v[MX];
    int need = 0;
    for(ll i = 0; i < k; ++i){
        for(ll j = arr[i]; j <= n; j += arr[i]){
            // cout << j << " ";
            v[arr[i]].pb(j);
        }
        cout << endl;
    }
    fi(0,k){
        fe(u,v[arr[i]]) cout << u << " ";
        cout << endl;
    }
}