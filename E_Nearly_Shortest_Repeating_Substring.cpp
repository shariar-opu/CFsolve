#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        set<int>st;
        for(int i = 1; i*i <= n; i++){
            if(n%i == 0){
                if(i != n) st.insert(i);
                if(n/i != n) st.insert(n/i);
            }
        }
        
        auto check = [&] (string a, int k ){ //lemda function; thanks ramim bhai<3
            int cnt = 0;
            string need = "";
            for(int i  = 0; i < n; i+=k){
                string b = s.substr(i, k);
                if(a != b) cnt++, need = b;
                if(cnt == 2) return 0;
            }
            if(!cnt) return 1;

            int c = 0;
            for(int i = 0; i < k; i++){
                if(a[i] != need[i]) c++;
            }
            if(c <= 1) return 1;
            return 0;
        };

        bool ok = 1;
        for(auto k : st){
            string sub1= s.substr(0,k);
            string sub2 = s.substr(k,k);
            if(check(sub1,k)|| check(sub2,k)){
                cout << k << "\n";
                ok = 0;
                break;
            }
        }
        if(ok)cout << n << "\n";
    }
}