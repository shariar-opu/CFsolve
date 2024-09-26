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

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

void solve(int tc){
    int n;  cin >> n;
    string s;   cin >> s;

    vector<ll> pre(n), suf(n);

   bool vis[26] = {0};

    pre[0] =  vis[s[0] - 'a'] = 1;
    for(int i = 1; i < n; i++){
        if(!vis[s[i] - 'a']){
            pre[i] = pre[i-1] + 1;
            vis[s[i] - 'a'] = 1;
        }
        else pre[i] = pre[i-1];
    }

    reset(vis, 0);

    suf[n-1] = vis[s[n-1] - 'a'] = 1;
    for(int i = n-2; i >= 0; --i){
        if(!vis[s[i] - 'a']){
            suf[i] = suf[i+1] + 1;
            vis[s[i] - 'a'] = 1;
        }
        else suf[i] = suf[i+1];
    }

    ll ans = 0;
    for(int i = 0; i < n-1; i++){
        ans = max(ans, pre[i]+suf[i+1]);
    }

    cout << ans << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}