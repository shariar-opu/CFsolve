#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while (t--){
        int a,b,c,d;    cin >> a>>b>>c>>d;
        int ans = 0;
        if(b>d)cout << -1 << endl;
        else{
            ans = d-b;
            b=d;
            a = ans+a;
            if(c>a) cout<<-1<<endl;
            else{
                bool ok = 1;
                while(ok){
                    if(c==a){
                        ok = 0;
                        break;
                    }
                    else{
                        a--;
                        ans++;
                    }
                }
                cout << ans << endl;
            }
        }
    }
}