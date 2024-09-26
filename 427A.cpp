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
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn cout << cnt << endl;
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int n; cin >> n;
    int a[n];
    int cnt = 0;
    int ans = 0;
    /*
    others thought...!!
    */
    fi(0,n){
        cin >> a[i];
        if(a[i] > 0) ans += a[i];
        else{
            if(ans < 1)cnt++;
            else ans--;
        }
    }
    /*
    my thought :(
    */

    // fi(0,n){
    //     if(a[i] == -1) cnt ++;
    //     else if(a[i] == 0) continue;
    //     else if(a[i] > 0){
    //         if(a[i+1] == -1 ){
    //             a[i] += a[i+1];
    //             a[i+1] = 0;
    //             if(a[i] > 0) {
    //                 a[i+1] = a[i];
    //             }
    //         }
    //         else a[i+1]+=a[i];
    //     }
    // }
    cout << cnt << endl;
}