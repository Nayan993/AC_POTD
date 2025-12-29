#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long mn = LLONG_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        // Special case n = 2
        if(n == 2) {
            cout << max(a[0], -a[1]) << "\n";
            continue;
        }

        long long X = 0;
        int i = 0, j = 1;

        while(j < n) {
            if(a[i] == mn) {
                X -= a[j];  // pick second
                j++;
            } else if(a[j] == mn) {
                X += a[i];  // pick first
                i++; j++;
            } else {
                long long pickFirst = X + a[i];
                long long pickSecond = X - a[j];
                if(pickFirst >= pickSecond) {
                    X = pickFirst;
                    i++; j++;
                } else {
                    X = pickSecond;
                    j++;
                }
            }
        }

        cout << X << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
