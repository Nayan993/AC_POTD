#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i].first >> nums[i].second;
    }

    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j =0 ; j < n; j++){
            if(j != i && nums[j].second == nums[i].first) count++;
        }
    }
    cout<< count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}