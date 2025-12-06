#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s,t;
    cin>>s>>t;

    if(s.size() != t.size()){     
        cout<<"NO"<<endl;
        return;
    }

    int f = 0;
    int e = t.size() - 1;
    bool flag = true;

    while(f < s.size()){          
        if(s[f] != t[e]){
            flag = false;
            break;
        }
        f++;
        e--;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
