#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j <= e; ++j)
#define fr(e,s ) for(int i = e; i >= s; --i)
#define fe(e) for (auto u : e)
using namespace std;
bool vis = 0;
int main()
{
    optimize();
    int f,p,q,c=0,c1=0;
    cin>>f>>p;
    int arr[250];
    fi(0,p)
    {
        cin>>arr[i];
    }
    cin>>q;
    fi(p,p+q)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    fi(0,p+q)
    {
       if(arr[i]!= arr[i+1])
       {
           c1++;
       }
    }
    if(c1==f)
    cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}