#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int bon, beef, chicken, bt, ct; 
        cin >> bon >> beef >> chicken >> bt >> ct;
        int taka = 0;
        if(bon >= 2){
            if(ct > bt){
                if(chicken * 2 <= bon){
                    bon -= chicken*2;
                    taka += (chicken*ct);
                    if(bon >= 2){
                        if(beef*2 <= bon){
                            bon -= beef*2;
                            taka += (beef*bt);
                        }
                        else {
                            beef -= (bon/2);
                            taka += ((bon/2)*bt);
                        }
                    }
                }
                else{
                    chicken -= (bon/2);
                    taka += ((bon/2)*ct);
                }
            }
            else {
                if(beef * 2 <= bon){
                    bon -= beef*2;
                    taka += (beef*bt);
                    if(bon >= 2){
                        if(chicken*2 <= bon){
                            bon -= chicken*2;
                            taka += (chicken*ct);
                        }
                        else {
                            chicken -= (bon/2);
                            taka += ((bon/2)*ct);
                        }
                    }
                }
                else {
                    beef -= (bon/2);
                    taka += ((bon/2)*bt);
                }
            }

        }
        cout << taka << endl;
    }
}