#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    vector<int> drinks(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>drinks[i];
        sum+=drinks[i];
    }
    double result = (double)sum /(double) n;
    cout << fixed << setprecision(12) << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}