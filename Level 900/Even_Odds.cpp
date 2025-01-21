#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long count_odds = (n + 1) / 2;

    if (k <= count_odds) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - count_odds) << endl;
    }

    return 0;
}