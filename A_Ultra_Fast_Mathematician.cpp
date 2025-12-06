#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    string res = "";
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i])
            res += '0';
        else
            res += '1';
    }
    
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
