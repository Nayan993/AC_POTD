#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+b == c) cout<<"YES"<<endl;
    else if (a+c == b) cout<<"YES"<<endl;
    else if (c+b == a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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