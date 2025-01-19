#include <bits/stdc++.h>
using namespace std;

int help(int n, int k){

    int pwg[n];
    int gold = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>pwg[i];
    }

    for(int i = 0; i < n; i++){
        if(pwg[i] >= k)  gold += pwg[i];
        else if(gold > 0 && pwg[i] == 0){
            gold--;
            count++;
        }
    }
    return count;
}

int main() {

int test_cases = 0;
int n = 0;
int k = 0;
int helped = 0;
cin>>test_cases;

for(int i = 0; i < test_cases; i++){
    cin>>n>>k;
    helped = help(n, k);
    cout<<helped<<endl;
    
}
return 0;
}