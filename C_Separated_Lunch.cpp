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

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

void solve(int tc){
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr) cin >> i;
    sort(all(arr));

    ll l = 0, r = n-1, k = (n+1)/2, ans = 0;
    while(r - l > 1 && l < r){
        ans += arr[l] + arr[r];
        r -= 2, l += 2;
    }
    if(l == r) ans += arr[l];

    ll sum = accumulate(all(arr), 0);
    cout << max(ans, sum - ans) << endl;
}

int32_t main(){
    optimize();
    int t = 1;  //cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}