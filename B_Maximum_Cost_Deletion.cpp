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
    int n, a, b;    cin >> n >> a >> b;
    string s;   cin >> s;

    int f0 = 0, f1 = 0, zero = 0, one = 0, o = 0, z = 0;

    for(int i  = 0; i < n; i++){
        if(s[i] == '1'){
            one++;
            f0 = max(f0, zero);
            zero = 0;
            o++;
        }
        else{
            zero++;
            f1 = max(f1, one);
            one = 0;
            z++;
        }
    }
    if(zero) f0 = max(f0, zero);
    if(one) f1 = max(f1, one);

    int need = (a + b) * n;

    if(o >= z) cout << max(need, (a * f0) + b + (z - f0) * (a + b) + (o * a) + b) << endl;
    else cout << max(need, (a * f1) + b + (o - f1) * (a + b) + (z * a) + b) << endl;
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