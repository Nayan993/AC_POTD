#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    long long n;
    cin>>n;
    if(n % 2 == 0) cout<< n/2<<endl;
    else cout<< -(n+1)/2<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}