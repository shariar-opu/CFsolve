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
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 1000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

ll gcd(ll a, ll b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

void solve(int tc){
    ll n;   cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;

    if(n == 3){
        yes;
        return;
    }
    
    vector<ll>a(n-1), b(n-1), c(n-1);
    ll need = -1;
    bool lg = 1;
    for(int i = 1; i < n-1; i++){
        if(gcd(arr[i], arr[i-1]) > gcd(arr[i], arr[i+1])){
            need = i;
            lg = 0;
            break;
        }   
    }
    if(lg){
        yes;
        return;
    }
    for(int i = 0; i < n-1; i++){
        if(need > i) a[i] = arr[i];
        else a[i] = arr[i+1];
        if((need-1) > i) b[i] = arr[i];
        else b[i] = arr[i+1];
        if((need+1) > i) c[i] = arr[i];
        else c[i] = arr[i+1];
    }
    bool ok = 0;
    for(int i = 1; i < sz(a)-1; i++){
        if(gcd(a[i], a[i-1]) > gcd(a[i], a[i+1])){
            ok = 0;
            break;
        }
        ok = 1;
    }
    if(!ok){
        for(int i = 1; i < sz(b)-1; i++){
            if(gcd(b[i], b[i-1]) > gcd(b[i], b[i+1])){
                ok = 0;
                break;
            }
            ok = 1;
        }
    }
    if(!ok){
        for(int i = 1; i < sz(c)-1; i++){
            if(gcd(c[i], c[i-1]) > gcd(c[i], c[i+1])){
                ok = 0;
                break;
            }
            ok = 1;
        }
    }

    ok?yes:no;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}