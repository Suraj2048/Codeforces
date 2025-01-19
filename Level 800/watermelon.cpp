#include<iostream>
using namespace std;

int main(){

    int wt_of_watermelon = 0;
    cin>>wt_of_watermelon;

    if(wt_of_watermelon % 2 == 0 && wt_of_watermelon > 2){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
