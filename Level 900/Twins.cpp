#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    int mySum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        mySum += coins[i];
        count++;
        if (mySum > totalSum - mySum) {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
