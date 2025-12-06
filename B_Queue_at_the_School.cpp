#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i = 0; i < n-1;){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i+=2;
            }
            else{
                i++;
            }
        }
    }
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}