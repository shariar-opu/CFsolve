#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define int ll
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

const int inf = 1e6 + 5;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

bool mark[inf+5];
vector<int>primes(inf);
void sieve(){
    //calculate min prime factor for every number
    for(int i = 1; i <= inf; i++) primes[i] = i;
    for(int i = 4; i <= inf; i += 2) primes[i] = 2;
    for(int i = 3; i*i <= inf; i += 2){
        for(int j = i*i; j <= inf; j += i+i){
            primes[j] = min(i, primes[j]);
        }
    }
}

vector<int>adj[inf];
bool vis[inf];
int cnt;

void bfs(int u){
    vis[u] = 1;
    queue<int>q;
    q.push(u);

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(auto v : adj[tmp]){
            if(!vis[v]){
                vis[v] = 1;
                q.push(v);
                cnt++; // count node for every component
            }
        }
    }
}

void solve(int tc){
    int n, m;   cin >> n >> m;
    for(int i = n; i <= m; i++){
        adj[i].clear();
        vis[i] = 0;
    }

    for(int i = n; i <= m; i++){
        int val = i, cur = primes[val];

        vector<int> tmp;
        while(1){
            //find value which is divisible by same prime factor
            if(cur == 1) break;
            tmp.pb(cur);

            while(!(val % cur)) val /= cur;
            cur = primes[val];
        }

        for(auto u : tmp){
            // make adj list
            if(u + i <= m){
                adj[u].pb(u + i);
                adj[u + i].pb(i);
            }
            if(i - u >= n){
                adj[i].pb(i - u);
                adj[i - u].pb(i);
            }
        }
    }

    vector<int> cc;
    for(int i = n; i <= m; i++){
        if(sz(adj[i])){
            if(!vis[i]){
                bfs(i);
                cc.pb(cnt+1); //store connected components node
                cnt = 0;
            }
        }
        else cc.pb(1);
    }

    sort(all(cc));
    cout << sz(cc) << endl;
    for(auto u : cc) cout << u << endl;
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