#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int maxi,mini;
    if(x>y && x> z) maxi = x;
    if(y>x && y> z) maxi = y;
    if(z>x && z> y) maxi = z;

    if(x<y && x< z) mini = x;
    if(y<x && y< z) mini = y;
    if(z<x && z< y) mini = z;

    cout<<maxi-mini<<endl;


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}