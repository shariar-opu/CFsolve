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
    while(t--){
        int n;  cin >> n;
        bool  ok = 1;
        
        int k = n;
        int cnt = 0,p =0;
        while(k != 0){
            int r  = k % 10;
            if(r == 1 || r == 0)cnt++;
            k/=10;
            p++;
        }
        if(cnt==p)yes;
        else{
            while(ok){
                if(n%10 == 0) n/=10;
                else if(n%11 == 0) n /= 11;
                else if(n%101==0) n /= 101;
                else if(n%110==0) n /= 110;
                else if(n%111==0) n /= 111;
                else if(n%100==0) n /= 100;
                else ok = 0;
            }
            int zo = 0, l = 0;
            while(n != 0){
                int r  = n % 10;
                if(r == 1 || r == 0)zo++;
                n/=10;
                l++;
            }
            if(l == zo) yes;
            else no;
        }
    }
}