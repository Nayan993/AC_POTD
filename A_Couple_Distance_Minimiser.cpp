#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s , t;
    cin>>s>>t;
    int i = s.size()-1;
    int j = t.size()-1;
    int ans = 0;
    while(i >= 0 && j >= 0 && s[i] == t[j]){
        ans++;
        i--;
        j--;
    }
    int result = (s.size()-ans)+(t.size()-ans);
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}