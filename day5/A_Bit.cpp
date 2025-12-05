#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n;
   cin>>n;
   int x = 0;
   while(n--){
    string temp;
    cin>>temp;
    if(temp == "++X" || temp == "X++") x++;
    else x--;
   }
   cout<<x<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}