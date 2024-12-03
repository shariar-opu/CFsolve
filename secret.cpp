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

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

void solve(int tc){
    string s;   getline(cin, s);
    //char ch = 'A' - 1
    //char ch = 'Z' + 1;
    char ch = 'Z' + 1;
    for(int i = 0; i < sz(s); i++){
        if(s[i] >= 64 && s[i] <= 97){
            //pattern - 01
            /*if(s[i] + 4 > 'Z'){
                int a = 4 - ('Z' - s[i]);
                s[i] = ch + a;
            }
            else s[i] += 4;*/

            //pattern - 02
            /*if(s[i] - 3 < 'A'){
                int a = 3 - (s[i] - 'A');
                s[i] = ch - a;
            }
            else s[i] -= 3; */

            //pattern - 03
            if(s[i] - 5 < 'A'){
                int a = 5 - (s[i] - 'A');
                s[i] = ch - a;
            }
            else s[i] -= 5;
        }
    }
    cout << s << endl;
}

int32_t main(){
    optimize();
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