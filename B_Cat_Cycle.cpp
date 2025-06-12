    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    void solve(int tc){
        int n, k;  cin >> n >> k;
        k--;
        if(n & 1){
            cout << (k + k / (n / 2)) % n + 1 << endl;
        }
        else{
            cout << k % n + 1 << endl;
        }
    }

    int32_t main(){
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        
        int t = 1;
        cin >> t;
        for(int i = 1; i <= t; i++) solve(i);

        return 0;
    }