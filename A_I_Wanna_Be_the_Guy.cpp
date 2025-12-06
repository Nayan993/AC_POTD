#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int total = n*(n+1)/2;
    set<int> st;
    int p;
    cin >> p;
    for(int i = 0; i < p; i++){
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    int sum = 0;
    for(auto &p:st) sum+=p;
    if(sum == total) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}