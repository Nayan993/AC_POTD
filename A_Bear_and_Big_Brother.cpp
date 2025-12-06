#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int a,b;
   cin>>a>>b;
   int year = 0;
   while(a<=b){
        a*=3;
        b*=2;
        year++;
   }
   cout<<year<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}