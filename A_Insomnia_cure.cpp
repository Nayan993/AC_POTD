#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ans++;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}