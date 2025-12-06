#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    string first = s.substr(0, n / 2);
    set<char> chars(first.begin(), first.end());
    if(chars.size() == 1) 
        cout << "NO" << endl;
    else 
        cout << "YES" << endl;
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
