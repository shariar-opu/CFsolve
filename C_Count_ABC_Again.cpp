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
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 1000000000;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

void solve(int tc){
    int n, q;   cin >> n >> q;
    string s, check = "ABC";   cin >> s;

    vector<string> sub(n);

    int l = 0, ans = 0;
    while(l < n - 2){
        sub[l] = s.substr(l, 3);
        if(sub[l] == check) ans++;
        l++;
    }

    // cout << ans << endl;
    // for(auto u : sub) cout << u << " ";
    // cout << endl;

    while(q--){
        int idx;    cin >> idx;
        char ch;    cin >> ch;

        int change = idx - 3;
        if(change <= 0){
            if(idx - 1 == 0){
                if(sub[0] == check){
                    ans--;
                    sub[0][0] = ch;
                    if(sub[0] == check) ans++;
                }
                else {
                    sub[0][0] = ch;
                    if(sub[0] == check) ans++;
                }
            }
            else if(idx - 1 == 1){
                if(sub[0] == check){
                    ans--;
                    sub[0][1] = ch;
                    if(sub[0] == check) ans++;
                }
                else {
                    sub[0][1] = ch;
                    if(sub[0] == check) ans++;
                }
                if(sub[1] == check){
                    ans--;
                    sub[1][0] = ch;
                    if(sub[1] == check) ans++;
                }
                else {
                    sub[1][0] = ch;
                    if(sub[1] == check) ans++;
                }
            }
            else{
                if(sub[0] == check){
                    ans--;
                    sub[0][2] = ch;
                    if(sub[0] == check) ans++;
                }
                else {
                    sub[0][2] = ch;
                    if(sub[0] == check) ans++;
                }
                if(sub[1] == check){
                    ans--;
                    sub[1][1] = ch;
                    if(sub[1] == check) ans++;
                }
                else {
                    sub[1][1] = ch;
                    if(sub[1] == check) ans++;
                }
                if(sub[2] == check){
                    ans--;
                    sub[2][0] = ch;
                    if(sub[2] == check) ans++;
                }
                else {
                    sub[2][0] = ch;
                    if(sub[2] == check) ans++;
                }
            }
        }
        else{
            if(sub[change] == check){
                ans--;
                sub[change][2] = ch;
                if(sub[change] == check) ans++;
            }
            else {
                sub[change][2] = ch;
                if(sub[change] == check) ans++;
            }
            if(sub[change+1] == check){
                ans--;
                sub[change+1][1] = ch;
                if(sub[change+1] == check) ans++;
            }
            else {
                sub[change+1][1] = ch;
                if(sub[change+1] == check) ans++;
            }
            if(sub[change+2] == check){
                ans--;
                sub[change+2][0] = ch;
                if(sub[change+2] == check) ans++;
            }
            else {
                sub[change+2][0] = ch;
                if(sub[change+2] == check) ans++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main(){
    Bismillah();
    int t = 1;  //cin >> t;
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