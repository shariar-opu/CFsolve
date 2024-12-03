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

const int inf = 2e5;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

bool mark[inf+5];
set<ll>primes;
void sieve(){
    mark[0] = mark[1] = 1;
    for(int i = 4; i <= inf; i += 2) mark[i] = 1;
    for(int i = 3; i*i <= inf; i += 2){
        if(!mark[i]){
            for(int j = i*i; j <= inf; j += i+i){
                mark[j] = 1;
            }
        }
    }

    primes.in(2);
    for(int i = 3; i <= inf; i++){
        if(!mark[i]) primes.in(i);
    }
}

void solve(int tc){
    int n;  cin >> n;

    if(n < 5){
        cout << -1 << endl;
        return;
    }

    vector<ll> odd, even;

    for(int i = 1; i <= n; i++){
        if(i & 1) odd.pb(i);
        else even.pb(i);
    }
    sort(all(odd));
    int x = 0, y = odd[sz(odd)-1];

    for(auto u : even){
        if(primes.find(u+y) != primes.end()) continue;
        else {
            x = u;
            break;
        }
    }
    for(auto u : odd) cout << u << " ";
    cout << x << " ";
    for(auto u : even){
        if(u != x) cout << u << " ";
    }
    cout << endl;
}

int32_t main(){
    Bismillah();
    sieve();
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