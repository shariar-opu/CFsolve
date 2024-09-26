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
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        fi(0, n)
        {
            cin >> a[i];
        }
        int cnt = 0;
        ll mx = 0;

        fi(0,n)
            mx = max(mx,a[i]);
            // cout << mx << endl;
        fi(0, n)
        {
            if(mx != a[a.size()-1]){
                cnt = mx;
                break;
            }
            else if(mx == a[a.size()-1]) a.pp();
            else{
                if(a[i] <= a[i+1]) continue;
                else if(a[i] > a[i+1]){
                    
                }
           }
        }
        cout << cnt << endl;
        cnt*=0;
    }
}