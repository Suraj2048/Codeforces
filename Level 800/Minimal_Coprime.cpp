#include <bits/stdc++.h>
using namespace std;


int countMinimalCoprime(int l, int r) {
    if (l == r) {
        return (__gcd(l, r) == 1) ? 1 : 0; 
    }
    return (r - l + 1) - (r / 2 - (l - 1) / 2); 
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << countMinimalCoprime(l, r) << endl;
    }

    return 0;
}
