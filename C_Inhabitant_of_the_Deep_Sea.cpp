#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define youhua() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(u) u.begin(), u.end()
int32_t main()
{
    youhua();
    int t;  cin >> t;
    while(t--){
        int n,k;    cin >> n >> k;
        vector<int>arr(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum <= k)cout << n << '\n';
        else{
            int l = (k+1)/2, r = k/2;
            for(int i = 0; i < n; i++){
                if(l >= arr[i]){
                    l -= arr[i];
                    arr[i] = 0;
                }
                else {
                    arr[i] -= l;
                    l = 0;
                }
            }
            reverse(all(arr));
            for(int i = 0; i < n; i++){
                if(r >= arr[i]){
                    r -= arr[i];
                    arr[i] = 0;
                }
                else{
                    arr[i] -= r;
                    r = 0;
                }
            }
            int cnt = 0;
            for(int &i : arr){
                if(!i)cnt++;
            }
            cout << cnt << '\n';
        }
    }
}