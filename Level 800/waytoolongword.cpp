#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    if (t <= 0) return 0;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word; 
        int n = word.length();

        if (n > 10) {
            cout << word[0] << (n - 2) << word[n - 1] << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}