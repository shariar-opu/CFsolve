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
    ve(string) v;
    ve(int)v2;
    int n;  cin >> n;
    string s;   cin >> s;
    for(int i = 0; i <s.size(); i++){
        string s2;
        if(i+3 <= s.size()-1){
            s2 += s[i];
            s2 += s[i+1];
            s2 += s[i+2];
            s2 += s[i+3];
            v.pb(s2);
            continue;
        }
        else break;
    }
    fe(u,v){
        int cnt = 0;
        if(u[0] != 'A'){
            if(u[0] > 'A'){
                int sml = (int)u[0] - (int)'A';
                int big = (int)'Z' - (int)u[0]+1;
                cnt+= min(sml,big);
            }
        }
        else cnt+=0;

        if(u[1] != 'C'){
            if(u[1] > 'C'){
                int sml = (int)u[1] - (int)'C';
                int big = ((int)'Z' - (int)u[1])+3;
                cnt+= min(sml,big);
            }
            else {
                cnt+= (int)'C'- (int)u[1];
            }
        }
        else cnt+=0;

        if(u[2] != 'T'){
            int sml = abs((int)u[2] - (int)'T');
            int big = ((int)u[2]-64)+6;
            cnt+= min(sml,big);
        }
        else cnt+=0;

        if(u[3] != 'G'){
            if(u[3] > 'G'){
                int sml = (int)u[3] - (int)'G';
                int big = ((int)'Z' - (int)u[3])+7;
                cnt+= min(sml,big);
            }
            else {
                cnt+= (int)'G'- (int)u[3];
            }
        }
        else cnt+=0;

        v2.pb(cnt);
    }
    int mn = *min_element(v2.begin(),v2.end());
    dn(mn);
}