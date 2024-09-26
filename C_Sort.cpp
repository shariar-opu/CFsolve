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
    int n, q;   cin >> n >> q;

    vector<vector<int>> a(n+1, vector<int>(26,0));
    for(int i = 1; i <= n; i++){
        char ch;    cin >> ch;
        a[i] = a[i-1];
        a[i][ch - 'a']++;
    }

    vector<vector<int>> b(n+1, vector<int>(26,0));
    for(int i = 1; i <= n; i++){
        char ch;    cin >> ch;
        b[i] = b[i-1];
        b[i][ch - 'a']++;
    }

    while(q--){
        int l, r, dif = 0;   cin >> l >> r;

        for(int i = 0; i < 26; i++){
            int cnt1 = a[r][i] - a[l-1][i];
            int cnt2 = b[r][i] - b[l-1][i];
            dif += abs(cnt1 - cnt2);
        }

        cout << dif/2 << endl;
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