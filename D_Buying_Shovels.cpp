#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n, k, ans = 0;   cin >> n >> k;

        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                int x = n / i;
                if(x <= k && ans < x) ans = x;
                if(i <= k && ans < i) ans = i;
            }
        }

        cout << n / ans << endl;
    }
}