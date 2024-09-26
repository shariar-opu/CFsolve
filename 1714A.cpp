#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();
    int t;
    int difH = 0;
    int difM = 0;
    cin >> t;
    vector<int> test(t);
    for (int i = 0; i < t; i++)
    {
        int n, H, M;
        cin >> n >> H >> M;
        vector<int> num(n);
        if (n <= 10 && H < 24 && M < 60)
        {
            for (int j = 0; j < n; j++)
            {
                int Hi, Mi;
                cin >> Hi >> Mi;
                if (Hi < 24 && Mi < 60)
                {
                    if (H == Hi && M == Mi)
                    {
                        cout << 0 << " " << 0 << endl;
                        break;
                    }
                    else if (H < Hi)
                    {
                        difH = Hi - H;
                        if (M < Mi)
                        {
                            difM = Mi - M;
                        }
                        else
                        {
                            difM = (60 - M) + Mi;
                            difH -= 1;
                        }
                        cout << difH << " " << difM << endl;
                        difH *= 0;
                        difM *= 0;
                    }
                    else if (H > Hi)
                    {
                        difH = (24 - H) + Hi;
                        if (M < Mi)
                        {
                            difM = Mi - M;
                        }
                        else
                        {
                            difM = (60 - M) + Mi;
                            difH -= 1;
                        }
                        cout << difH << " " << difM << endl;
                        difH *= 0;
                        difM *= 0;
                    }
                }
            }
        }
    }
}