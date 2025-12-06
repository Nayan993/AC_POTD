#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int maxi = 0;
    int total = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        total-=a;
        total+=b;
        maxi = max(maxi,total);
    }
    cout<<maxi<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}