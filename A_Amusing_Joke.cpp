#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string g, h, p;
    cin >> g >> h >> p;
    g+=h;
    sort(g.begin(),g.end());
    sort(p.begin(),p.end());
    if(g == p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}