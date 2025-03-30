#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a = 0, b = 0;
    cin>>a>>b;

    int ans = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }
    cout<<ans;
    return 0;
}