#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findmini(vector<ll> &tower , ll target){
    int s = 0;
    int e = tower.size()-1;
    int mid = s+(e-s)/2;
    int ans = tower.size();
    while(s<=e){
        if(tower[mid] >= target){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    ll result = LLONG_MAX;
    if(ans < (int)tower.size()){
        result = min(result,llabs(tower[ans] - target));
    }
    if(ans -1 >=0){
        result = min(result,llabs(tower[ans-1] - target));
    }
    return result;
}
void solve() {
    int n, m;
    cin >> n>> m;
    vector<ll> hostel(n);
    for(int i = 0; i < n; i++) cin>>hostel[i];
    vector<ll> tower(m);
    for(int i = 0; i < m; i++) cin>>tower[i];
    vector<int> ans;
    sort(tower.begin(),tower.end());
    for(int i = 0; i < n ; i++){
        ll result = findmini(tower,hostel[i]);
        ans.push_back( result);
    }
    ll finalans = LLONG_MIN;
    for(int i = 0; i < ans.size(); i++){
        finalans= max(finalans, (ll)ans[i]);
    }
    cout<<finalans<<endl;
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