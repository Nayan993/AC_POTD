#include<bits/stdc++.h>
using namespace std;
int blocks(string& s){
    int c=1;
    for(int i=1;i<s.size();i++) if(s[i]!=s[i-1]) c++;
    return c;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
        int ans=0;
        for(int i=0;i<n;i++){
            string r=s.substr(i)+s.substr(0,i);
            ans=max(ans,blocks(r));
        }
        cout<<ans<<"\n";
    }
}