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

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
int gcd(int a, int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a*b)/gcd(a,b));}

void solve(int tc){
    string s;   cin >> s;
    bool ok = 0;
    for(int i = 0; i < sz(s)-1; i++){
        cout << s[i];
        if(s[i] == s[i+1] && !ok) {
            if(s[i] == 'z') cout << 'a';
            else cout << char(s[i]+1);
            ok = 1;
        }
    }
    if(!ok){
        if(s[sz(s)-1] == 'z') cout << s[sz(s)-1] << 'a' << endl;
        else cout << s[sz(s)-1] << char(s[sz(s)-1]+1) << endl;
    }
    else cout << s[sz(s)-1] << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}