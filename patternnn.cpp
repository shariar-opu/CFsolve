#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize(); 
    int n=5;
    for(int i=0;i<=n;i++){ //upper_line
       //uper_space
       for(int j=0;j<n-i;j++){
        cout<<" ";
       }
       //uper_alphabet
       for(int c=0;c<(2*i-1);c++){
        char ch=(char)('A'+c);
        cout<<ch;
       }
       cout<<endl;
    } 
    for(int ln=n+1;ln<=(2*n-1);ln++){//lower_line
       //space
       for(int space=0;space<(ln-n);space++){
        cout<<" ";
       }
       //lower_alphabet
       for(int alp=0;alp<(2*(2*n-ln)-1);alp++){
        char ch=(char)('A'+alp);
        cout<<ch;
       }
       cout<<endl;
    }
    return 0;
}