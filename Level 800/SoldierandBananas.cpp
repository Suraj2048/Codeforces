#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int k = 0, n = 0, w = 0;

    cin>>k>>n>>w;

    int total = (w * (w + 1)/2) * k;
    int ans = total - n;

    if(ans < 0) ans = 0;

    cout<<ans;
    
    return 0;
}