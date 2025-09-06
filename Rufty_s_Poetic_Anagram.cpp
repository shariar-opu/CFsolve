#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long k;
    cin >> s >> k;

    int n = s.size();

    for (int i = 0; i < n && k > 0; i++) {
        // Look ahead up to k positions
        int bestPos = i;
        for (int j = i + 1; j < n && j - i <= k; j++) {
            if (s[j] < s[bestPos]) {
                bestPos = j;
            }
        }

        // Bring bestPos character to position i
        for (int j = bestPos; j > i; j--) {
            swap(s[j], s[j - 1]);
        }

        // Reduce available swaps
        k -= (bestPos - i);
    }

    cout << s << "\n";
    return 0;
}
