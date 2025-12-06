#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    // 1. Initialize array with 1, 2, ..., n
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    // 2. Calculate current XOR sum of the range [l, r]
    int range_xor = 0;
    for (int i = l; i <= r; i++) {
        range_xor ^= a[i];
    }

    // 3. Apply adjustments
    if (l == r) {
        // If range size is 1, the element must be 0 to have XOR sum 0
        a[l] = 0;
    } else {
        // Step A: Eliminate the current XOR remainder by modifying a[l]
        a[l] ^= range_xor;

        // Step B: Ensure distinctness.
        // We add a large bit (1<<29) to two elements in the range.
        // This keeps the total XOR sum unchanged (bit^bit = 0) 
        // but pushes these values out of the range of 1..n so they don't collide.
        int large_bit = (1 << 29);
        a[l] |= large_bit;
        a[r] |= large_bit;
    }

    // 4. Output
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << endl;
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