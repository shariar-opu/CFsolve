#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s) for(auto u : s)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
int main()
{
    optimize();
    set<char>v;
    int n; cin >> n;
    char ch[n];
    fi(0,n){
        cin >> ch[i];
        v.ins(tolower(ch[i]));
    }
    // fe(v) cout << u;
    int cnt = 0;
    for(char i = 'a'; i <= 'z'; ++i){
        fe(v){
            if( i == u ){
                cnt++;
                continue;
            }
        }
    }
    (cnt == 26)? yes : no;
    
}