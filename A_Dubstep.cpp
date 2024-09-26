#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define msi multiset<int>
#define usi unordered_set<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vpii vector<pii>
#define spii set<pii>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    string s, s2;   cin >> s;
    vector<string> ch;
    fi(0,s.size()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            continue;
        }
        else{
            s2+=s[i];
            if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B') {
                ch.pb(s2);
                ch.pb(" ");
                s2="";
                continue;
            }
            if(i== s.size()-1){
                ch.pb(s2);
                ch.pb(" ");
                s2="";
            }
        }
    }
    fe(u,ch){
        cout << u;
    }
    cout << endl;
}