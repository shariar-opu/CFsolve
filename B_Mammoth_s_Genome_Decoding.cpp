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
#define sort(u) sort(u.begin(),u.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int n;  cin >> n;
    string s;   cin >> s;
    string  s1 = "AGCT", s2 = "";
    map<char,int> m;
    for(int i = 0; s[i]!='\0'; ++i){
        m[s[i]]++;
    }
    int mx = 0, sum = 0, what = 0;
    fe(u,m){
        if(u.first != '?'){
            mx= max(mx,u.second);
            sum += u.second;
        }
        else what  = u.second;
    }
    cout << mx << " " << sum << " " << what << endl;
    fe(u,m) cout << u.first << " " << u.second << endl;
    if((mx*4) == n){
        fe(u,m){
            if(u.second != mx){
                for(int i = 0; s[i]!='\0'; ++i){
                    if(s[i] =='?'){
                        s[i] = u.first;
                        break;
                    }
                }
            }
        }
        cout << s << endl;
    }
    else if( n == what && n%4 == 0){
        int t= n/4;
        while(t--){
            for(int i = 0; s1[i] != '\0'; ++i){
                s2+=s1[i];
            }
        }
        cout << s2 << endl;
    }
    else cout << "===" << endl;
}