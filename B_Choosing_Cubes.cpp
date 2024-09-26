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
    int n, f, k;    cin >> n  >> f >> k;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;
    int val = arr[f-1];
    sort(rall(arr));
    int cnt = 0, idx = 0, idx2 = INT_MAX;
    for(int i = 0; i < n; i++){
        if(val == arr[i]){
            idx = max(idx, i+1);
            idx2 = min(idx2, i+1);
            cnt++;
        }
    }
    if(idx <= k) yes;
    else {
        if(cnt > 1){
            if(idx2 > k)no;
            else cout << "MAYBE\n";
        }
        else no;
    }

}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}