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
    int n,k;    cin >> n >> k;
    vector<int>arr(n);
    int ans = INT_MAX,evn = 0;
    bool  ok = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0)evn++;
        if(arr[i]%k == 0)ans = 0;
        ans = min(ans,k - arr[i]%k);
    }
    if(k == 2 || k == 3 || k == 5 ) {
        cout << ans << endl;
    }
    else {
        if(evn >= 2) cout << 0 << endl;
        else if(evn == 1) cout << min(ans,evn) << endl;
        else cout << min(ans,2) << endl;

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