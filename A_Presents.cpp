#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n ;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];
    map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[i+1]=nums[i];
    }
    int i = 1;
    while(i<=n){
        for(auto &p: freq){
            if(p.second == i) cout<<p.first<<" ";
        }
        i++;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}