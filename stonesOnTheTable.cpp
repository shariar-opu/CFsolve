#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    int n; cin >>n;
    char c[n];
    vector<char>v;
    for( int i = 0; i < n; i++ ){
        cin >> c[i];
        if(c[0] == c[1]){
            for(int j = 1; j < n; j++){
                if(c[1] != c[j]){
                   break;
                }
                else v.pb(j);
                v.pb(c[i]);
            }
        }
    }
    if(v.size() == 0){
        cout << "0" << endl;
    }
    else cout << v.size() << endl;

}
int main()
{
    solve();
}