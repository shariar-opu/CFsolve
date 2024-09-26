#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

int main()
{
    int n,count=0,sum=0;
    for(int i=0;; i++)
    {
        int m;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>m;
        if(m==1)
        {
            cin>>n;
            ++count;
            if(n>=0 && n<=10)
            {
                if(count==0)
                {
                    sum+=n;
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout<<"nota invalida"<<endl;
            }
        }
        else
        {
            break;
        }
    }
    cout<<"media = "<<sum/2<<endl;

}
