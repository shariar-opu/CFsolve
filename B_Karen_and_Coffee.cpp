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

const int inf = 2e5+123;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
int gcd(int a, int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a*b)/gcd(a,b));}

void solve(int tc){
    vector<ll> arr(inf,0);
    ll n, k, q;    cin >> n >> k >> q;
    for(int i = 0; i < n; i++){
        ll a, b;   cin >> a >> b;
        arr[a]++;
        arr[b+1]--;
    }

    vector<ll>ans(inf,0);
    ll sum = 0;
    for(int i = 0; i <= inf; i++){
        sum += arr[i];
        ans[i] = sum;
        if(ans[i] >= k) ans[i] = 1;
        else ans[i] = 0;
    }

    for(int i = 1; i <= inf; i++){
        ans[i] += ans[i-1];
    }

    while(q--){
        int a, b;   cin >> a >> b;
        cout << ans[b] - ans[a-1] << endl;
    }
}

int32_t main(){
    optimize();
    int t = 1;  
    //cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}