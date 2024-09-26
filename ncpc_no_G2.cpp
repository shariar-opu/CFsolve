#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
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
#define rs(u) sort(u.rbegin(), u.rend())
#define all(u) u.begin(), u.end()
#define rall(u) u.rbegin(), u.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int32_t main()
{
    youhua();
    int t;  cin >> t;
    for(int tc = 1; tc <= t; tc++){
        set <int> st;
        vector<pair < int, int>> vp;
        int n;  cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >>a[i];
            st.ins(a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >>b[i];
            st.ins(b[i]);
        }
        for(int i = 0; i < n; i++){
            if(i < n-1){
                vp.pb({a[i], a[i+1]});
            }
        }
        bool ok = 1;
        if(st.size() == n) cout <<"Case " << tc << ": " <<  0 << endl;
        else if(st.size() == n*2 || st.size() == n*2 -1) cout <<"Case " << tc << ": " <<  n << endl;
        else {
            fe(u,vp){
                for(int i = 0 ; i < n; i++){
                    if(u.first == b[i] && ok){
                        for(int j = i+1; j < n; j++){
                            if(u.second == b[j]){
                                ok = 0;
                                break;
                            }
                        }
                    }
                }
            }
            cout <<"Case " << tc << ": " << n-2 << endl;
        }
    }
}