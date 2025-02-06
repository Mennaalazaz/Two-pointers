#include <bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
#define intCeil(a,b) (ll(a)+ll(b-1))/ll(b)

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int seraji=0,dima=0;
    int i=0,j=n-1;
    bool turn=0; int removed=0;
    while(i<=j){
        if(a[i]>=a[j]) {
            removed=a[i];
            i++;
        }
        else {
            removed=a[j];
            j--;
        }
        if(turn==0) { // sereji turn
            seraji+=removed;
        }
        else {
            dima+=removed;
        }
        turn=!turn;
    }

    cout<<seraji<<' '<<dima<<endl;

}


int main() {
    fastIO();
    solve();
    return 0;
}
