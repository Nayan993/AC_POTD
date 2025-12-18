#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int n = 1; n <= 10; n++) {
        int lastDigit = (n * k) % 10;
        if (lastDigit == 0 || lastDigit == r) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}
