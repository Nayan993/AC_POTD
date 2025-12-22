#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt05 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 10 == 0 || a[i] % 10 == 5)
            cnt05++;
    }

    // ❌ mixed case
    if (cnt05 > 0 && cnt05 < n) {
        cout << "NO\n";
        return;
    }

    // ✅ all {0,5}
    if (cnt05 == n) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 10 == 5)
                a[i] += 5;   // make it end with 0
        }
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }

    // ✅ cycle case
    set<ll> st;
    for (int i = 0; i < n; i++) {
        while (a[i] % 10 != 2) {
            a[i] += a[i] % 10;
        }
        st.insert(a[i] % 20);
    }

    if (st.size() == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
