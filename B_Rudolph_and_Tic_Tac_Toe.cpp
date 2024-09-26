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
#define f(i, e) for (int i = 1; i <= e; ++i)
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
        m(int,char)mp;
        f(i,3){
            f(j,3){
                char ch;    cin >> ch;
                mp[i*10+j] = ch;
            }
        }
        if((mp[11] != '.' && mp[11] == mp[22] && mp[22] == mp[33])){
            if(mp[22] != '.') dn(mp[22]);
            else dn("DRAW");
        }
        else if((mp[13] != '.' && mp[13] == mp[22] && mp[22] == mp[31])){
            if(mp[22] != '.') dn(mp[22]);
            else dn("DRAW");
        }
        else if((mp[11] != '.' && mp[11] == mp[12] && mp[12] == mp[13])){
            if(mp[12] != '.') dn(mp[12]);
            else dn("DRAW");
        }
        else if((mp[21] != '.' && mp[21] == mp[22] && mp[22] == mp[23])){
            if(mp[22] != '.') dn(mp[22]);
            else dn("DRAW");
        }
        else if((mp[31] != '.' && mp[31] == mp[32] && mp[32] == mp[33])){
            if(mp[32] != '.') dn(mp[32]);
            else dn("DRAW");
        }

        else if((mp[11] != '.' && mp[11] == mp[21] && mp[21] == mp[31])){
            if(mp[21] != '.') dn(mp[21]);
            else dn("DRAW");
        }
        else if((mp[12] != '.' && mp[12] == mp[22] && mp[22] == mp[32])) {
            if(mp[22] != '.') dn(mp[22]);
            else dn("DRAW");
        }
        else if((mp[13] != '.' && mp[13] == mp[23] && mp[23] == mp[33])){
            if(mp[23] != '.') dn(mp[23]);
            else dn("DRAW");
        }
        else cout<<"DRAW" << endl;
    }
}