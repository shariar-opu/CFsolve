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

bool big(pair<int, int>a, pair<int, int> b){
    return a.second>b.second;
}

void solve(int tc){
    int n, k;   cin >> n >> k;
    map<ll, int> mp;
    vector<ll>arr(n);
    for(ll &i : arr){
        cin >> i;
        mp[i]++;
    }
    if(!k) {
        cout << sz(mp) << endl;
        return;
    }
    vector<pair<ll, int>> vp;
    for(auto u : mp) vp.pb({u.first, u.second});

    sort(all(vp), big);
    for(auto u : vp){
        if(!k) break;
        int m = n - u.second;
        if(m < k){
            mp[u.first] += m;
            k -= m;
        }
        else{
           mp[u.first] += k;
            k = 0;
        }
    }
    vp.clear();
    for(auto u : mp) vp.pb({u.first, u.second});
    sort(all(vp), big);

    int sum = 0, cnt = 0;
    for(auto u : vp){
        sum += u.second;
        cnt ++;
        if(sum >= n){
            cout << cnt << endl;
            return;
        }
    }
}

int32_t main(){
    Bismillah();
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}

ll pw(ll a, ll b){
    a %= mod;
    ll r = 1;
    while(b > 0){
        if(b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
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