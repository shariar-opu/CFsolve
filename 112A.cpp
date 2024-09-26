#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define N 100
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    optimize();
    char a[N+1], b[N+1]; 
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(97 > a[i]){
            a[i] += 32;
        }
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        if(97 > b[i]){
            b[i] += 32;
        }
    }
    cout << strcmp(a,b) << endl;
}
int main()
{
    solve();
}