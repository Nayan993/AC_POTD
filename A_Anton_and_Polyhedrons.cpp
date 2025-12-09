#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        string temp;
        cin >> temp;
        if(temp == "Tetrahedron" ) count += 4;
        else if (temp == "Cube" ) count += 6;
        else if (temp == "Octahedron") count += 8;
        else if (temp == "Dodecahedron" ) count += 12;
        else if (temp == "Icosahedron" ) count +=20;
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}