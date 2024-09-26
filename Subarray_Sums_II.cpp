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
const int N = 2e5 + 123;
int arr[N];
int presum[N];
m(int ,int)mp;
int32_t main()
{
    youhua();
    int n,q;    cin >> n >> q;
    for(int i = 1; i<= n; i++)cin >>arr[i];
    for(int i = 1; i <= n;i++){
        presum[i] = presum[i-1] + arr[i];
    }
    int cnt = 0;
    for(int i = 1; i<= n; i++){
        mp[presum[i-1]]++;
        int ans = presum[i]-q;
        cnt+= mp[ans];
    }
    cout << cnt << endl;
}