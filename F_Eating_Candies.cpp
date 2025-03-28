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
    vector<int>arr(n);
    for(int &i : arr) cin >> i;

    int ans = 0;

    vector<int>pre1(n+1), pre2(n+1);
    pre1[0] = arr[0];
    for(int i = 1; i < n; i++) pre1[i] = pre1[i-1] + arr[i];

    reverse(all(arr));
    pre2[0] = arr[0];
    for(int i = 1; i < n; i++) pre2[i] = pre2[i-1] + arr[i];

    map<int, pair<int, int>>mp;

    for(int i = 0; i < n; i++) mp[pre1[i]] = {i+1, 0};
    for(int i = 0; i < n; i++) mp[pre2[i]] = {mp[pre2[i]].first, i+1};

    for(auto u : mp){
        if(u.second.first && u.second.second){
            if(u.second.first + u.second.second <= n) 
                ans = max(ans, u.second.first + u.second.second);
        }
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