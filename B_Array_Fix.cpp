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
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr) cin >> i;
    bool ok = 1;
    int f = arr[n-1];
    for(int i = n-2; i >= 0; --i){
        if(arr[i] > f){
            if(arr[i] < 10){
                ok = 0;
                break;
            }
            int fst = arr[i] / 10;
            int sec = arr[i] % 10;
            if(fst > sec || sec > f){
                ok = 0;
                break;
            }
            f = fst;
        }
        else f = arr[i];
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