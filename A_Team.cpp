#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n;
   cin>>n;
   int count = 0;
   while(n--){
    int x,y,z;
    cin>>x>>y>>z;
    if((x+y+z) >=2) count++;
   }
   cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}