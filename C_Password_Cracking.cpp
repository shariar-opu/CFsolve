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

int guss(string s){
    cout << "? " << s << endl;

    int a;  cin >> a;
    return a;
}

void solve(int tc){
    int n;  cin >> n;

    bool ok = 0;
    string s = "";
    for(int i = 0; i < n; i++){
        if(!ok){
            if(guss(s + '0')) s += '0';
            else if(!i || guss(s + '1')) s += '1';
            else ok = 1;
        }
        if(ok){
            if(guss('0' + s)) s = '0' + s;
            else s = '1' + s;
        }
    }
    cout << "! " << s << endl;lo
}

int32_t main(){
    // optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}