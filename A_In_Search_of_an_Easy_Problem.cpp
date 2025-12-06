#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    bool flag = true;
    while(n--){
        int x;
        cin>>x;
        if(x == 1){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}