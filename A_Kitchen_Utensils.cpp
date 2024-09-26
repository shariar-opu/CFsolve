#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define msi multiset<int>
#define usi unordered_set<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vpii vector<pii>
#define spii set<pii>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int n,k;
    cin >> n >> k;
    vi v(n), v2;
    mii m;
    fi(0,n){
        cin >> v[i];
        m[v[i]]++;
    }
    int mx = 0;
    fe(u,m){ 
        mx =max(mx,u.second);
        v2.pb(u.first);
    }
    // cout << mx << " " << v2.size() << endl;
    // fe(u,m) cout << u.first << " " << u.second << endl;
    int item = 0 , need = 0, cnt = 2;
    bool ok = 1;
    if(mx-k > 0){
        while(ok){
           need = k*cnt;
           if(mx  > need) cnt++;
           else ok = 0;
        }
        item = v2.size() * need;
        cout << item - n << endl;
    }
    else {
        item = k * v2.size();
        cout << item - n << endl;
    }
}