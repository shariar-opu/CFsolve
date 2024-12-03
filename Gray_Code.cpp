#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double dl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define in insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define reset(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define file(); freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 1000000000;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

string bin(int n, int a){
    string res(n, '0');

    for(int i = n-1; i >= 0; --i){
        int r = a % 2;
        res[i] = r + '0';
        a /= 2;
    }
    return res;
}

void solve(int tc){
    int n;  cin >> n;
    
    int k = pw(2, n);
    vector<string> val;
    for(int i = 0; i < k; i++){
        val.pb(bin(n, i));
    }
    map<string, int> mp;
    for(auto u : val){
        for(auto i : u) if(i == '1') mp[u]++;
        if(!mp[u]) mp[u] = 0;
    }
    vector<bool> mark(k+1, 0);
    vector<string> ans(k);
    ans[0] = val[0];
    mark[0] = 1;
    bool ok = 1;
    int i = 0;
    while(ok){
        for(int j = 0; j < k; j++){
            if(abs(mp[ans[i]] - mp[val[j]]) == 1 && !mark[j]){
                mark[j] = 1;
                ans[i+1] = val[j];
                i++;
                break;
            }
        }
        if(i == k-1) ok = 0;
    }

    for(auto u : ans) cout << u << endl;
}

int32_t main(){
    Bismillah();
    int t = 1;
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}

ll pw(ll a, ll b){
    ll r = 1;
    while(b > 0){
        if(b & 1) r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}
ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b){
    return ((a*b)/gcd(a, b));
}