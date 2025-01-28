#include <bits/stdc++.h>
using namespace std;

int main() {

    string p;
    getline(cin , p);
    bool found = false;

    for(char c : p){
        if(c == 'H' || c == 'Q' || c == '9')    found = true;
    }

    if(found)   cout<<"YES";
    else    cout<<"NO";

    return 0;
}