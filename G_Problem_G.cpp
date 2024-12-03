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

const int inf = 1e7;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

bool mark[inf+5];
vector<ll>ans(inf+5);
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

    for(int i = 3; i <= inf; i++){
        if(!mark[i]) ans[i]++;
        if(!mark[i] && i * 2 <= inf) ans[i*2]--;
    }

    for(int i = 1; i <= inf; i++) ans[i] += ans[i-1];
}

void solve(int tc){
    ll n;   cin >> n;

    cout << ans[n] << endl;
}

int32_t main(){
    optimize();
    sieve();
    int t = 1;  cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}