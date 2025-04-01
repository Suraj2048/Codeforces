#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 0;
    cin>> n;

    string color;
    cin>>color;

    int i = 0, j = 1, count = 0;

    while(j < n){
        if(color[i] == color[j]){
            i++;    j++;
            count++;
        }
        else{
            i++;    j++;
        }
    }
    cout<<count;
    return 0;
}