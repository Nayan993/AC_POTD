#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    map<int , int> freq;
    for(auto &p: nums) freq[p]++;
    if(freq.size() == 1){
        cout<<0<<endl;
        return;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}