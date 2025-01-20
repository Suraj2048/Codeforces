#include <bits/stdc++.h>
using namespace std;

void check(string players){
    int count = 1;
    for(int i = 1; i < players.size() ; i++){
        if(players[i] == players[i - 1]){
            count++;
            if(count == 7){
                cout<<"YES";
                return;
            }
        }
        else{
            count = 1;
        }
    }
    cout<<"NO";
}

int main() {

    string players;
    cin>>players;

    check(players);
    return 0;
}