#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin>>s;
    int upper = 0;
    int lower = 0;
    for(auto &p : s){
        if(p>='A' && p<= 'Z') upper++;
        else lower++;
    }
    if(upper > lower) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else if( upper < lower) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}