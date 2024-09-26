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
void solve(){
    string s, s1 = "",s2="";    cin  >> s;
    for(int i = 0; s[i] != '\0'; i++){
        s1 += s[i];
        if(s[i+1]!='0') break;
    }
    if(s1.size() == s.size()){
        dn(-1);
        return;
    }
    for(int i = s1.size(); i < s.size(); i++){
        s2+=s[i];
    }
    int _s1 = stoi(s1);
    int _s2 = stoi(s2);
    if(_s1 >= _s2 || _s1 == 0 || _s2 == 0)dn("-1");
    else cout << _s1<<" "<<_s2<<endl;
}
int main()
{
    optimize();
    int t;  cin >> t;
    while(t--){
        solve();
    }
}