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
#define fi(s, e) for (int i = s; i <= e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
using namespace std;
int main()
{
    optimize();
    // vector<pii>v;
    int t;
    cin >> t;
    int ans = 0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%b == 0)cout << "0" << endl;
        else{
            ans = b - (a%b);
            cout << ans << endl;
        }
        
    }
}