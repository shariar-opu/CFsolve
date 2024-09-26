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
    int n, m, q;    cin >> n >> m >> q;

    vector<ll> arr(m);
    for(ll &i : arr) cin >> i;

    sort(all(arr));

    ll ans[n+1], j = 0, k = 1, need = 0;
    if(m == 1){
        for(int i = 1; i <= n; i++){
            if(arr[0] < i) ans[i] = n - arr[0];
            else ans[i] = arr[0] - 1;
        }
    }
    else {
        for(int i = 1; i <= n; i++){
            if(arr[k] == i) {
                j++, k++;
            }

            if(j == m-1) ans[i] = n - arr[j];
            else{
                need = abs(arr[k] - arr[j] - 1);
                if(need & 1) ans[i] = (need/2)+1;
                else ans[i] = need/2;
            }
        }
    }
    while(q--){
        ll a;   cin >> a;
        cout << ans[a] << endl;
    }
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