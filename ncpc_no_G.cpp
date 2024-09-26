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
    int tc = 1;
    while(t--){
        set<int> ms;
        int n;  cin >> n;
        vector<bool> mark;
        ve(int) a(n), b(n);
        f(i,n) cin >> a[i] , ms.ins(a[i]);
        f(i,n) cin >> b[i] , ms.ins(b[i]);
        int cnt = 0, k = -1, mn = INT_MIN;
        if(ms.size() == n) cout <<"Case " << tc << ": " <<  0 << endl;
        else if(ms.size() == n*2 || ms.size() == n*2 -1) cout <<"Case " << tc << ": " <<  n << endl;
        else {
            f(i,n){
                f(j,n){
                    if(a[i] == b[j]){
                        if(k < j){
                            if(j == n-1 && cnt > 1){
                                k = 0; 
                                cnt = 0;
                                break;
                            }
                            else{
                                k = j;
                                cnt++;
                                break;
                            }
                        }
                    }
                }
            }
            cout <<"Case " << tc << ": " <<  n - cnt << endl;
        }
        tc++;
    }
}