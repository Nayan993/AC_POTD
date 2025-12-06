#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,h;
    cin>>n>>h;
    vector<int> heights(n);
    for(int i = 0; i < n; i++) cin>>heights[i];
    int width = 0;
    for(auto &p : heights){
        if(p > h) width+=2;
        else width+=1;
    }
    cout<<width<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}