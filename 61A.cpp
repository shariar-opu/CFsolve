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
#define fn for( int i = 0; i < n; ++i )
#define fsa for(int i = 0; i < a.size(); ++i)
#define fsb for(int i = 0; i < b.size(); ++i)
#define fs for(int i = 0; i < s.size(); ++i)
using namespace std;
int main()
{
    optimize();
    string a, b; cin >> a >> b;
    string ans;

    fsa{
        if(a[i] == b[i]){
            ans += "0";
        }
        else ans += "1";
    }
    for(auto u:ans) cout << u;
    cout<< endl;
}