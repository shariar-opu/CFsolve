#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define ins insert
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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

void solve(int tc){
    int n,m;    cin >> n >> m;
    vector<string> arr(n);
    for(string &i : arr) cin >> i;
    int a[100] = {0},b[100] = {0},c[100] = {0},d[100] = {0};
    for(int i = 0; i < n; i++){
        if(arr[i][0] == 'W') a[87]++;
        else a[66]++;
    }
    for(int i = 0; i < n; i++){
        if(arr[i][m-1] == 'W') c[87]++;
        else c[66]++;
    }
    for(int i = 0; i < m; i++){
        if(arr[0][i] == 'W') b[87]++;
        else b[66]++;
    }
    for(int i = 0; i < m; i++){
        if(arr[n-1][i] == 'W') d[87]++;
        else d[66]++;
    }
    if((a[66] == n && c[87] == n) || (a[87] == n && c[66] == n) || (b[66] == m && d[87] == m) || (b[87] == m && d[66] == m)) no;
    else yes;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}