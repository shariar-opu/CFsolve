#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn cout << cnt << endl;
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int cnt = 0;
    int t; cin >> t;
    while(t--){
        double a, b , c;
        cin >> a >> b >> c;
        if ( a==b){
            cnt = 0;
        }
        else{
            if(b > a) swap ( b, a);
            double ans = a + b;
            double need = ans/2;
            bool ok = true;
            if(ans > c){
                while(ok){
                    cnt ++;
                    double sub = a-need;
                    // cout << cnt << "  " << sub << endl;
                    if(sub > c){
                        a -= c; b += c;
                    }
                    else {
                        a -= sub; b+= sub;
                        ok = false;
                    }
                }
            }
            else {
                cnt = 1;
            }
        }
        cout << cnt << endl;
        cnt *=0;
    }
}