#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;cin >> n;
    vector<int> w(n);

    for (int i = 0; i < n; i++) cin >> w[i];

    int l = 0, r = n - 1;
    long long sum_left = 0, sum_right = 0;
    int max_candies = 0;

    while (l <= r) {
        if (sum_left < sum_right) {
            sum_left += w[l++];
        } else {
            sum_right += w[r--];
        }

        if (sum_left == sum_right) {
            max_candies = max(max_candies, l-1 + (n -  r));
        }
    }

    cout << max_candies << '\n';
}

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
