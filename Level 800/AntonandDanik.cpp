#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 0;
    cin>>n;
    string str;
    cin>>str;

    int countA = 0, countD = 0;

    for(char ch : str){
        if(ch == 'A')   countA++;
        else    countD++;
    }

    if(countA > countD) cout<<"Anton";
    else if(countD > countA)    cout<<"Danik";
    else    cout<<"Friendship";
    
    return 0;
}