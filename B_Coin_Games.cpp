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
    string s;   cin >> s;

    bool ok = 1;
    int cnt = 0;
    while(ok){
        int d = 0;
        // cout << "S: " << s  << " " << cnt << endl;

        if(sz(s) > 0){
            for(int i = 0; i < sz(s); i++){
                if(s[i] == 'U'){
                    if(i+2 < sz(s)) {
                        if(s[i+1] == 'U') s[i+1] = 'D';
                        else s[i+1] = 'U';
                        if(s[i+2] == 'U') s[i+2] = 'D';
                        else s[i+2] = 'U';
                        s.erase(s.begin()+i);
                        cnt++;
                        break;
                    }
                    else {
                        s.erase(s.begin()+i);
                        cnt++;
                        break;
                    }
                }
                else d++;
            }
            //cout << d << endl;
            if(d == sz(s)){
                if(cnt & 1)yes;
                else no;
                return;
            }
        }
        else {
            if(cnt & 1)yes;
            else no;
            return;
        }
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