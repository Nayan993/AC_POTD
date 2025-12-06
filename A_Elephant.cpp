#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   // write your logic here
   int x;
   cin>>x;
   int start = 0;
   int count = 0;
   while(start < x){
        if(start + 5 <= x) start+=5;
        else if (start + 4 <= x) start+=4;
        else if (start + 3 <= x) start+=3;
        else if (start + 2 <= x) start+=2;
        else if (start + 1 <= x) start+=1;
        count++;
   }
   cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}