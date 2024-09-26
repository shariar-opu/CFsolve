#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define s(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define sort(u) sort(u.begin(), u.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int t;  cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
         ve(int) gas(n+1);
        fi(0,n) cin >>gas[i];
        int cnt = 0, k = 0;
        int mx = 0;
        fi(1,x+1){
            cnt++;
            if(gas[k] == i){
                mx = max(cnt,mx);
                cnt = 0;
                k++;
            }
        }
        k--;
        for(int i = x; i>0; --i){
            if(gas[k] == i){
                mx = max(cnt,mx);
                cnt = 0;
                k--;
            }
            cnt++;
        }
        cout << mx << endl;
    }
}