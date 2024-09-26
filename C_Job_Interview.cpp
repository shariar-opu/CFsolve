#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define ins insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

void solve(int tc){
    int n, m;   cin >> n >> m;
    vector<ll> a(n+m+1), b(n+m+1);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;

    ll k = 0;
    for(ll i = 0; i < n+m+1; i++){
        ll p = n, t = m, ans = 0;
        if(i != k){
            if(a[i] > b[i] && p > 0){
                ans += a[i];
                p--;
            }
            else {
                if(t > 0){
                    ans += b[i];
                    t--;
                }
                else{
                    ans += a[i];
                    p--;
                }
            }
        }
        cout << ans << " ";
        k++;
    }
    cout << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}