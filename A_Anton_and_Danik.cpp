#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0, d = 0;
    for(auto &p: s){
        if(p == 'A') a++;
        else d++;
    }
    if(a > d) cout<<"Anton"<<endl;
    else if(a < d) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}