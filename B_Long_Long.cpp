#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n ;
    cin >> n;
    vector<long long> nums(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        sum += llabs(nums[i]);
    }
    int l = 0;
    int op =0;
    while(l < n){
        if(nums[l] < 0){
            op++;
            int r = l;
            while(r < n && nums[r] <= 0) r++;
            l= r;
        }
        else{
            l++;
        }
    }
    cout<< sum <<" "<<op<<endl;

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