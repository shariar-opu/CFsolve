#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define lld long long double
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
using namespace std;
int main()
{
    optimize();
    int n; cin >> n;
    int tmp = n;

    double sum = 0;
    while ( tmp-- ){
        double a; cin >> a;
        sum += a;
    }
    
    double ans = sum / n;
    cout << fixed << setprecision(12)  << ans << endl;

}