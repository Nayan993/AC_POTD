#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++) cin >> p[i];

    int g = 0;
    for(int i = 1; i <= n; i++) {
        g = gcd(g, abs(i - p[i]));
    }

    cout << g << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
}
