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

const int inf = 123;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf];
bool vis[inf], ache[inf];
int cnt = 0, ans = 0;

void dfs(int u){
    vis[u] = 1;
    cnt++;
    for(auto v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int tc){
    cnt = 0, ans = 0;
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        vis[i] = 0;
        ache[i] = 0;
    }

    int n;  cin >> n;
    vector<int>boys(n);
    for(int &i : boys) cin >> i;
    sort(all(boys));

    int m;  cin >> m;
    vector<int>girls(m);
    for(int &i : girls) cin >> i;
    sort(all(girls));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(boys[i] == girls[j]){
                ans++;
                boys[i] = girls[j] = -1;
                ache[boys[i]] = ache[girls[j]] = 1;
                break;
            }
            else if(boys[i]-1 == girls[j] || boys[i]+1 == girls[j]){
                if(ache[boys[i]] && ache[girls[j]]){
                    ans++;
                    boys[i] = girls[j] = -1;
                    break;
                }
                else{
                    adj[boys[i]].pb(girls[j]);
                    adj[girls[j]].pb(boys[i]);
                    ache[boys[i]] = ache[girls[j]] = 1;
                    boys[i] = girls[j] = -1;
                    break;
                }
            }
        }
    }
    for(int i = 1; i <= 100; i++){
        if(!vis[i] && ache[i]){
            dfs(i);
            ans += (cnt-1);
            cnt = 0;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}