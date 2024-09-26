#include<bits/stdc++.h>
#define int long long
#define fast() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
const int mx = 1e5+123;
int arr[mx];
int premod[mx];
int cnt[mx];
int32_t main(){
    fast();
    int t;  cin >> t;
    int k = 1;
    while(t--){
        mem(cnt,0);
        int n,m;    cin >> n >> m;
        for(int i = 1; i <= n; i++) cin >> arr[i];
        for(int i = 1; i <= n; i++) premod[i] = premod[i-1] + arr[i];
        for(int i = 1; i <= n; i++) premod[i] %= m;
        int ans = 0;
        cnt[0]++;
        for(int i = 1; i <= n; i++){
            ans += cnt[premod[i]];
            cnt[premod[i]]++;
        }
        cout << "Case " << k << ": " << ans << "\n";
        k++;
    }
}