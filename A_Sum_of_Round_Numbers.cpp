#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> nums;
    int count = 0;
    int i = 0;
    int place = 1;
    while(n>0){
        if(n % 10 != 0){
            nums.push_back((n%10)*place);
            count++;
        }
        place*=10;
        i++;
        n /= 10;
    }
    cout<<count<<endl;
    for(int j = 0 ; j < nums.size(); j++){
        cout<<nums[j]<<" ";
    }
    cout<<endl;

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