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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    vector<string>v;
    int n; cin >> n;
    int cnt = 0;
    fi(0,n){
        string s;
        cin >> s;
        v.pb(s);
        if(s == "01"){
            v.clear();
            v.pb(s);
            cnt++;
        }
    }
    cout << cnt << endl;
}