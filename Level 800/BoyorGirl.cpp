#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin>>str;

    char hash[26] = {0};

    for(int i = 0; i < str.size(); i++){
        hash[str[i] - 'a']++;
    }

    int c = 0;
    for(int i = 0; i < 26; i++){
        if(hash[i] != 0)    c++;
    }

    if(c % 2 == 0)  cout<<"CHAT WITH HER!";
    else    cout<<"IGNORE HIM!";
    return 0;
}