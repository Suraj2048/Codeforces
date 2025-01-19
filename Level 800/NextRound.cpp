#include <bits/stdc++.h>
using namespace std;

int nextRound(int n, int k){

    int score[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>score[i];
    }
    for(int i = 0; i < n; i++){
        if(score[i] >= score[k - 1] && score[i] > 0) count++;
    }
    return count;
}

int main() {

    int no_participant = 0;
    int place = 0;
    int result = 0;

    cin>>no_participant;
    cin>>place;
    result = nextRound(no_participant, place);
    cout<<result<<endl;

return 0;
}