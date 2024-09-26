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
    // int t;  cin >> t;
    // while(t--){
    //     ;
    // }
    string s;
    getline(cin,s);
    ve(char)ch;
    f(i,s.size()){
        if((int)s[i]>=65) ch.pb(s[i]);
    }
    if(ch[ch.size()-1] == 'a' || ch[ch.size()-1] == 'A' || ch[ch.size()-1] == 'E' || ch[ch.size()-1] == 'e' || ch[ch.size()-1] == 'I' || ch[ch.size()-1] == 'i' || ch[ch.size()-1] == 'O' || ch[ch.size()-1] == 'o' || ch[ch.size()-1] == 'U' || ch[ch.size()-1] == 'u' || ch[ch.size()-1] == 'Y' || ch[ch.size()-1] == 'y' ) yes;
    else no;
}