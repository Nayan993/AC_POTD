#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        int len = s.size();
        if(len > 10) {
            int mid = len - 2;
            cout << s[0] << mid << s[len - 1] << "\n";
        }
        else {
            cout << s << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
