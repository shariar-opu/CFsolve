#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define youhua()                   \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define se(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define f(i, e) for (int i = 0; i < e; ++i)
#define rf(j, s) for (int j = s; j >= 0; --j)
#define fe(s, e) for (auto s : e)
#define s(u) sort(u.begin(), u.end())
#define all(u) u.begin(), u.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    youhua();
    int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        int arr[n];
        ve(int)v;
        f(i,n){
            cin >> arr[i];
            v.pb(arr[i]);
        }
        s(v);
        bool ok = 1;
        f(i,n){
            if(arr[i] == v[i]) continue;
            else{
                ok = 0;
                break;
            }
        }
        if(k<2){
            if(ok) yes;
            else no;
        }
        else yes;
    }
}