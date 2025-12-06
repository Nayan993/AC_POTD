#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    vector<ll> nums(n);
    set<ll> s;

    for(ll i = 0; i < n; i++) {
        cin >> nums[i];
        s.insert(nums[i]);  
    }

    ll d = s.size();
    if (s.count(d)) {
        cout << d << "\n";
        return;
    }
    ll x = d + 1;
    while (!s.count(x)) {
        x++;
    }

    cout << x << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
