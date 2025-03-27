#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    vector<int> num;

    for (char c : s) {
        if (isdigit(c)) {
            num.push_back(c - '0');
        }
    }

    sort(num.begin(), num.end());

    string result = "";
    for (int i = 0; i < num.size(); i++) {
        result += to_string(num[i]);
        if (i < num.size() - 1) {
            result += "+";
        }
    }

    cout<<result<<endl;

    return 0;
}
