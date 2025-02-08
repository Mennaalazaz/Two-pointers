#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
             a[i] += a[i - 1];
        }

        string s;
        cin >> s;
        s = " " + s; // Make it 1-based indexing

        ll ans = 0;
        int i = 1, j = n;

        while (i < j) {
            while (i < j && s[i] != 'L') i++; // Find 'L'
            while (i < j && s[j] != 'R') j--; // Find 'R'

            if (i < j && s[i] == 'L' && s[j] == 'R') {
                ans += a[j] - a[i - 1]; // Add sum of range [i, j]
                i++; // Move to next potential 'L'
                j--; // Move to next potential 'R'
            }
        }

        cout << ans << '\n';
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
