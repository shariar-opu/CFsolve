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
    int cnt = 0;
    int t;cin >>t;
    while(t--){
        int x,y;cin >>x >> y;
        for(int i = 0;;i++){
            if(x < y){
            x+=8;
            cnt++;
            }
            else break;
        }
        cout << cnt << endl;
        cnt*=0;
    }
}
int main()
{
    solve();
}