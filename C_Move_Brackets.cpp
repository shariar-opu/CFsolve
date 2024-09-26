#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                c1++;
            }
            else {
                c2++;
                if(c1){
                    c1--;
                    c2--;
                }
            }
        }
        cout << (c1+c2)/2 << endl;
    }
}