#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int left, right;
    for(int i = 0; i < n; i++){
        if(nums[i] > maxi){
            maxi = nums[i];
            left = i;
        }
        if(nums[i] <= mini){
            mini = nums[i];
            right = i;
        }
    }
    int ans = (left-1) + (n-right);
    if(right < left) ans--;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}