#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int check = n-1;
    int ok = 0;
    if(n == 1){
        cout<<"I hate it"<<endl;
        return;
    }
    else{
        while(check--){
            if(ok==0){
                cout<<"I hate that"<<" ";
                ok = 1;
            }
            else{
                cout<<"I love that"<<" ";
                ok = 0;
            }
        }
        if(n % 2 == 0) cout<<"I love it"<<endl;
        else cout<<"I hate it";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

   solve();
    return 0;
}