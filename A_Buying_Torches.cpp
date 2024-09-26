#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int x,y,k;  cin>>x>>y>>k;

        int need = k + (k*y)-1;
        int mv = (need/(x-1)) + k;
        if(need%(x-1)) cout << mv+1 << '\n';
        else cout << mv << '\n';
    }
}
