#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 0;
    cin>>n;
    int ans = 0;
    while(n>0){
        if(n > 0 && n <= 5){
            ans += 1;
            break;
        }
        else{
            ans += 1;
            n -= 5;
        }
    }
    cout<<ans;
    return 0;
}