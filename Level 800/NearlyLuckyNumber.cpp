#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false; 
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    int c1 = 0;
    while(n > 0) {
        int r = n % 10;
        if (r == 4 || r == 7) c1++;
        n /= 10;
    }

    if (isLucky(c1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
