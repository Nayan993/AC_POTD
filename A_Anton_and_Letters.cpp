#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    getline(cin, s);
    map<char, int> freq;
    for(auto &p: s){
        if(p >= 'a' && p <= 'z') freq[p]++;
    }
    cout<<freq.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}