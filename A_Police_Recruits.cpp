#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    int count = 0;
    int untreated = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] < 0 && (count < nums[i] || count == 0)){
            untreated++;
        }
        else if(nums[i]<0) count--;
        else count+=nums[i];
    }
    cout<<untreated<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}