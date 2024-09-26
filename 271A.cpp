#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define lld long long double
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
// stl function.
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
using namespace std;
// bool digitCnt(int n)
// {
// }
int main()
{
    int y;
    cin >> y;

    set<int> st;

    for (int i = y + 1;; i++)
    {
        int tmp = i;
        int cnt = 0;
        while (tmp != 0)
        {
            int r = tmp % 10;
            st.ins(r);
            tmp /= 10;
            cnt++;
        }
        if (cnt == st.size())
        {
            cout << i << endl;
            break;
        }
        else{
            st.clear();
            continue;
        }
    }
}