#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n,x; cin>>n>>x;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second = i+1; // to carry index (1 based)
    }
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<r) {
        if(a[l].first+a[r].first==x) {
            cout<<a[l].second<<" "<<a[r].second<<endl;
            return;
        }
        else if(a[l].first+a[r].first>x) {
            r--;
        }
        else {
            l++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main() {
    fastIO();
    solve();
    return 0;
}
