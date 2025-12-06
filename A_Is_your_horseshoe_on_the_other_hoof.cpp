#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>st;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    cout<<4-st.size()<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}