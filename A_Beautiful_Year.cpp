#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool beauty(int year){
    string tempyear = to_string(year);
    sort(tempyear.begin(),tempyear.end());
    for(int i = 0; i < tempyear.size()-1; i++){
        if(tempyear[i]==tempyear[i+1]) return false;
    }
    return true;
}
void solve() {
    int y;
    cin>>y;
    int temp = y+1;
    while(true){
        if(beauty(temp)){
            cout<<temp<<endl;
            break;
        }
        else{
            temp++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}