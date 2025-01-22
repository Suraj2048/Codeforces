#include <bits/stdc++.h>
using namespace std;

int main() {


int n = 0;
cin>>n;
char input[4];
int ans = 0;

for(int i=0; i<n; i++){
    cin>>input;
    if(input[1] == '+' )    ans++;
    else if(input[1] == '-' ) ans--;
    
}
cout<<ans<<endl;
return 0;
}