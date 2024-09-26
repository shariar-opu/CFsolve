#include<bits/stdc++.h>
#define s(u) sort(u.begin(), u.end())
#define rs(u) sort(u.rbegin(), u.rend())
#define fast() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
using namespace std;
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n,m;    cin >> n >> m;
        vector<int> a(n), b(m);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        s(a);
        rs(b);
        int l = 0, r = n-1, ll = 0, rr = m-1;
        int ans = 0;
        while(l <= r){
            int one = abs(a[l]-b[ll]);
            int two = abs(a[r]-b[rr]);
            if(one > two){
                l++;
                ll++;
                ans += one;
            }
            else{
                r--;
                rr--;
                ans += two;
            }
        }
        cout << ans << "\n";

    }
}