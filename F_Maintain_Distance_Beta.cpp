#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n , z;
    cin >> n >> z;
    vector<ll> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    sort(nums.begin(), nums.end());
    ll i = 0;
    ll mid = n/2;
    ll j = 0;
    int count = 0;
    while(i <mid && j < n){
        if(llabs(nums[i] - nums[j]) >= z){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<count<<endl;
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