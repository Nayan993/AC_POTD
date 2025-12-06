#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin>>s;
    string temp ="";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            temp+=s[i];
            temp+="+";
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '2'){
            temp+=s[i];
            temp+="+";
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '3'){
            temp+=s[i];
            temp+="+";
        }
    }
    temp.pop_back();
    cout<<temp<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}