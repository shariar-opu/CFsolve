#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double dl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define endl '\n'
#define int ll
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

void solve(int tc){
    int n; cin >> n;

    vector<int> arr(n+1);
    vector<pair<ll, ll>> vp;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        int sz = arr[i] + i - 1;
        if(i > 1) vp.pb({i-1, sz});
    }

    sort(all(vp),[](pair<ll, ll>a, pair<ll, ll>b){
        if(a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
    });

    // for(auto u : vp) cout << u.first << " " << u.second << endl;
    
    set<int>st;
    st.in(n);
    for(auto u : vp) {
        if(st.find(u.second) != st.end()) st.in(u.first + u.second);
    }

    cout << *max_element(all(st)) << endl;
}

int32_t main(){
    Bismillah();
    int t = 1;  cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}

ll pw(ll a, ll b){
    ll r = 1;
    while(!b){
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