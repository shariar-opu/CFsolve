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

const int inf = 19;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

ll dp[inf+3];
int t;

ll fact(ll n) {
    if(!n) {
        dp[n] = 1;
        return 1;
    }
    dp[n] = n * fact(n-1);
    return dp[n];
}

void solve(int tc){
    fact(inf);

    ll n;   cin >> n;

    vector<int> v;
    for(int i = inf; i >= 0; --i){
       if(!n)break;

       if(dp[i] <= n){

        n -= dp[i];
        if(n < 0){
            if(n + dp[i+1] >= 0){
                n += dp[i+1];
                v.pp();
            }
            else{
                cout << "Case " << tc << ": " << "impossible\n";
                return;
            }
        }
        v.pb(i);
       }
    }

    if(n){
        cout << "Case " << tc << ": " << "impossible\n";
        return;
    }

    sort(all(v));

    cout << "Case " << tc << ": ";
    for(int i = 0; i < sz(v) - 1; i++){
        cout << v[i] << "!+";
    }
    cout << v[sz(v)-1] << "!" << endl;
}

int32_t main(){
    optimize();  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}