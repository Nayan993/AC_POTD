#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   // write your logic here
   int n;
   cin>>n;
   string s;
   cin>>s;
   int count = 0;
   for(int i = 0; i < s.size()-1; i++){
    if(s[i] == s[i+1]) count++;
   }
   cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
