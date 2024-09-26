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
        int n;  cin >> n;
        int xp = 1, xn = 1, yp = 1, yn = 1;
        f(i,n){
            int x , y;  cin >> x >> y;
            if(x<0) xn=0;
            if(x>0) xp=0;
            if(y<0) yn=0;
            if(y>0) yp=0;
        }
        if(xp != 0 || xn != 0 || yp != 0 || yn != 0) yes;
        else no;
    }
}