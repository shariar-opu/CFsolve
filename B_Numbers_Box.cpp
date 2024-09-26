#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n,m;    cin >> n >> m;
        int neg = 0,sum = 0, mn = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int a;  cin >> a;
                if(a < 0){
                    neg++;
                    sum += (a*-1);
                    mn = min(mn , (a * -1));
                }
                else {
                    sum += a;
                    mn = min(a,mn);
                }
            }
        }
        if(neg&1) sum -= (mn+mn);
        cout << sum << '\n';
    }
}