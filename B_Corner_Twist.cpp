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

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

void solve(int tc){
    int n, m;   cin >> n >> m;
    int k = max(n,m);
    int r1[k],r2[k],c1[k], c2[k];
    for(int i = 0; i < k; i++){
        r1[i] = r2[i] = c1[i] = c2[i] = 0;
    }
    char a[n][m], b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            r1[i] += (a[i][j] - '0');
            r1[i] %= 3;
            c1[j] +=(a[i][j] - '0');
            c1[j] %= 3;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
            r2[i] += (b[i][j] - '0');
            r2[i] %= 3;
            c2[j] +=(b[i][j] - '0');
            c2[j] %= 3;
        }
    }

    for(int i = 0; i < k; i++){
        if(r1[i] != r2[i] || c1[i] != c2[i]){
            no;
            return;
        }
    }
    yes;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}