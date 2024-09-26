#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define ins insert
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define lld long long double
using namespace std;
int main()
{
    int n; cin >> n;
    string s; 
    while( n-- ){
        cin >> s;
    }
    int cnt = 0;
    for( int i = 0; s[i] != '\0'; i++ ){
        if( s[i] == s[i + 1] ) cnt ++;
        else continue;
    }
    cout << cnt << endl;
}