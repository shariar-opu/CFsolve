#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define in insert
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    int n;  cin >> n;
    string s;   cin >> s;
    int r = sqrt(n);
    if(r*r != n){
        no;
        return;
    }
    if(n == 4){
        if(s == "1111"){
            yes;
            return;
        }
        else {
            no;
            return;
        }
    }

    string a = "", b = "1";
    int z = r - 2;
    for(int i = 1; i <= z; i++) b+='0';
    b += '1';
    for(int i = 0; i < r; i++) a += '1';

    int one = 0, zero = 0;
    for(int i = 0; i < sz(s); i += r){
        if(s.substr(i,r) == a && (!i || i == n - r)) one++;
        else if(s.substr(i,r) == b && i != 0 && i != n-r) zero++;
    }

    if(one == 2 && zero == r - 2) yes;
    else no;

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