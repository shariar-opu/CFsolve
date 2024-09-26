#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define youhua()                   \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define se(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define f(i, e) for (int i = 0; i < e; ++i)
#define rf(j, s) for (int j = s; j >= 0; --j)
#define fe(s, e) for (auto s : e)
#define s(u) sort(u.begin(), u.end())
#define rs(u) sort(u.rbegin(), u.rend())
#define all(u) u.begin(), u.end()
#define rall(u) u.rbegin(), u.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int32_t main()
{
    youhua();
    int n, k;   cin >> n >> k;
    ve(int) arr(n);
    f(i,n){
        cin >> arr[i];
    }
    int presum[n+1];
    for (int i = 1; i <= n; i++)
    {
        presum[i] = presum[i-1]+arr[i-1];
    }
    int mn = presum[k];
    int ans = 1;
    for(int i = 1; i <= n-k+1; i++){
        if(mn > abs(presum[i+k-1]- presum[i-1])){
            mn =  abs(presum[i+k-1]- presum[i-1]);
            ans = i;
        }
    }
    cout << ans << endl;
    
}