#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   string s,t;
   cin>>s>>t;
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   transform(t.begin(), t.end(), t.begin(), ::tolower);
   if(s < t) cout<<-1<<endl;
   else if (s > t) cout<<1<<endl;
   else cout<<0<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}