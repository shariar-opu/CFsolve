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
    int n,b,c;  cin >>n>>b>>c;
    ve(int) v1(b),v2(c),v;
    s(int) hlp;
    fi(0,b){
        cin >> v1[i];
        hlp.ins(v1[i]);
    }
    fi(0,c){
        cin >> v2[i];
        hlp.ins(v2[i]);
    }
    fi(1,n+1){
        bool mark = false;
        fe(u,v1) {
            if(u == i ){ 
                v.pb(1);
                mark = true;
                break;
            }
        }
        fe(u,v2) {
            if(!mark){
                if(u == i ){ 
                    v.pb(2);
                    break;
                }
            }
        }
    }
    fe(u,v) cout << u << " ";
    cout << endl;

}