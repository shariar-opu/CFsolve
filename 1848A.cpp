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
#define dn cout << cnt << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        vector<pii>v;
        int n , m ,k;
        cin >> n >> m >> k;
        int x,y;
        cin >> x >> y;
        int sum = x+y;
        bool ok = true;
        fi(0,k){
            int a , b;
            cin >> a >> b;
            v.pb({a,b});
        }
        fe(u,v){
            if((u.first+u.second)%2 == 0 && sum%2==0) {
                ok = false;
                break;
            }
            else if((u.first+u.second)%2 != 0 && sum%2!=0) {
                ok = false;
                break;
            }
            else ok = true;
        } 
        ok? yes : no; 
    }
}