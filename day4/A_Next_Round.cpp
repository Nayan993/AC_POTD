#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n , k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] > 0 && nums[i] >= nums[k-1]) count++;
    }
    cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}