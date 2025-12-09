#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
    int mini = nums[0]*nums[n-1];
    vector<int> divisors;
    for(int i = 2; i < mini; i++){
        if(mini % i == 0) divisors.push_back(i);
    }
    if(nums.size() != divisors.size()){
        cout<<-1<<endl;
        return;
    }
    else{
        for(int i = 0; i < n; i++){
            if(nums[i] != divisors[i]){
                cout<< -1<< endl;
                return;
            }
        }
        cout<<mini<<endl;
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