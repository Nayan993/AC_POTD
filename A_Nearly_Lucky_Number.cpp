#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    long long n;
    cin >> n;

    int cnt = 0;
    long long temp = n;
    while(temp > 0){
        int d = temp % 10;
        if(d == 4 || d == 7) cnt++;
        temp /= 10;
    }

    if(cnt == 4 || cnt == 7) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
