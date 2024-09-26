#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int line[n],count=0,mid=0;
    for(int i=0; i<n; i++)
    {
        char w[101];
        cin>>w;
        int j;
        for(j=0; w[j]!='\0'; j++)
        {
            ++count;
        }
        if(count<=10)
        {
            cout<<w<<endl;
        }
        else
        {
            for(int k=0; w[k]!='\0'; k++)
            {
                mid++;
            }
            cout<<w[0];
            cout<<mid-2;
            cout<<w[count-1]<<endl;
            mid*=0;
        }
        count*=0;
    }
}
