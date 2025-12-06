#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int temp = 0;
    int count = 0;
    while(temp < n){
        if(temp + 100 <= n){
            temp+=100;
            count++;
        }
        else if (temp + 20 <=n){
            temp+=20;
            count++;
        }
        else if(temp + 10 <= n){
            temp+=10;
            count++;
        }
        else if(temp + 5 <= n){
            temp+=5;
            count++;
        }
        else{
            temp++;
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}