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
#define fj(s, e) for (int j = s; j < e; ++j)
using namespace std;
// int Z=50;
// void insertAtEnd( int arr[], int &n, int e ){
//    if( n < Z ) {
//       arr[ n ] = e;
//    }
//    n = n + 1;
// }

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> b, c;
        // set<int> ans , b ,c;
        fi(0, n)
        {
            cin >> a[i];
        }
        int mx = *max_element(a, a + n);

        fi(0, n)
        {
            if (mx == a[i])
                c.pb(mx);
            if (mx > a[i])
                b.pb(a[i]);
        }
        if (b.size() == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;

        for (auto u : b)
            cout << u << " ";
        cout << endl;
        for (auto u : c)
            cout << u << " ";
        cout << endl;
    }
}