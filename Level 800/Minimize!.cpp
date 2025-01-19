#include<iostream>
using namespace std;

int minf(int a, int b){

    return (b-a);
}

int main(){

    int t;
    int a,b;
    cin>>t;
    int ans[t];

    for(int i=0; i<t; i++){
        cin>>a>>b;
        ans[i]= minf(a,b);
    }

    for(int j=0; j<t; j++){
        cout<<ans[j]<<endl;
    }

}