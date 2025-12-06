#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   string s;
   cin>>s;
   map<char,int> freq;
   for(auto & it :s) freq[it]++;
   if(freq.size() % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}