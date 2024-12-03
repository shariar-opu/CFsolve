#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define e '\n'
#define int ll
#define pb push_back
#define in insert
#define all(u) u.begin(), u.end()
#define rall(u) u.rbegin(), u.rend()
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(u) u.size()

const int inf = 100;
const int mod = 1000000000;
map<string, int> pre;
void sub(string s)
{
    int r = 0, n = s.size();
    string need = "";
    while(r < n){
        need += s[r];
        pre[need]++;
        r++;
    }
}
void solve(int tc){
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        string a; cin >> a;
        sub(a);
    }

    while(q--){
        string s;   cin >> s;
        pre[s]++;
        pre[s]--;
        cout << pre[s] << e;
    }


}
int32_t main(){
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);
    }

}


//ll gcd(ll a, ll b){
//    if(!)
//}
