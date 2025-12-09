#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int i = 0; i < n; i++){ 
        if(i % 2 == 0){
            for(int j = 0 ; j < m ; j++){
                cout<<"#";
            }
            cout << endl;
        }
        else{
            if(count == 0){
                for(int j = 0 ; j < m-1 ; j++)
                {
                    cout<<".";
                }
                cout<<"#";
                cout << endl;
                count = 1;
            }
            else{
                cout<<"#";
                for(int j = 0 ; j < m-1 ; j++)
                {
                    cout<<".";
                }
                cout << endl;
                count = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}