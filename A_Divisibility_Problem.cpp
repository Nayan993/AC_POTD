#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int a,b;
    cin>>a>>b;
    cout<<(b- a % b) % b<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}