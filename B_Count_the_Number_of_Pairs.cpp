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
    int n, k;   cin >> n >> k;
    string s;   cin >> s;

    map<char, int>mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
        if(s[i] < 'a'){
            if(mp[s[i]+32]){
                mp[s[i]]--, mp[s[i]+32]--;
                ans++;
            }
        }
        else{
            if(mp[s[i]-32]){
                mp[s[i]]--, mp[s[i]-32]--;
                ans++;
            }
        }
    }
    for(auto u : mp){
        if(k > 0 && u.second >= 2){
            int r = u.second/2;
            if(r < k){
                ans += r;
                u.second -= (r * 2);
                k -= r;
            }
            else if(r >= k){
                ans += k;
                u.second -= (k * 2);
                k = 0;
            }
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