#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // Sort the array

    ll max_students = 1, left = 0;

    for (ll right = 0; right < n; right++) {
        // Shrink the window if the difference exceeds 5
        while (arr[right] - arr[left] > 5) {
            left++;
        }
        max_students = max(max_students, right - left + 1);
    }

    cout << max_students << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
