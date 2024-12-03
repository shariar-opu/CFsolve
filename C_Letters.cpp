#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 1000000000;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

void solve(int tc){
    ll n, m;   cin >> n >> m;
    vector<ll> hostel(n), rooms(m);
    for(ll &h : hostel) cin >> h;
    for(ll &r : rooms) cin >> r;

    vector<ll> pre(n+1);
    ll s = 0;
    for(ll i = 0; i < n; i++){
        s += hostel[i];
        pre[i+1] = s;
    }

    vector<pair<ll, ll>> ans;
    ll l = 0, r = 1;
    while(l < m){
        if(rooms[l] <= pre[r]){
            ans.pb({r, abs(pre[r-1] - rooms[l])});
        }
        else r++, l--;
        l++;
    }

    for(auto u : ans) cout << u.first << " " << u.second << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}