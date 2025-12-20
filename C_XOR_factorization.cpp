#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    // Case 1: K is Odd
    if (k % 2 == 1) {
        for (int i = 0; i < k; i++) {
            cout << n << (i == k - 1 ? "" : " ");
        }
        cout << endl;
        return;
    }

    // Case 2: K is Even
    // Print k-2 copies of n
    for (int i = 0; i < k - 2; i++) {
        cout << n << " ";
    }

    // Now we need to find x, y such that x ^ y = n and x + y is maximized
    // Find the Most Significant Bit (MSB)
    int msb = 0;
    for (int i = 30; i >= 0; i--) {
        if ((n >> i) & 1) {
            msb = i;
            break;
        }
    }

    // Find the highest bit set to 1 that is NOT the MSB
    int pivot = -1;
    for (int i = msb - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) {
        // n is a power of 2 (e.g., 8 = 1000), no bits to swap
        cout << n << " " << 0 << endl;
    } else {
        // Construct the optimal x
        // 1. Start with n
        ll x = n;
        // 2. Remove the pivot bit
        x ^= (1LL << pivot);
        // 3. Turn on all bits lower than pivot
        for (int i = 0; i < pivot; i++) {
            x |= (1LL << i);
        }
        
        // Calculate y
        ll y = n ^ x;
        
        cout << x << " " << y << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}