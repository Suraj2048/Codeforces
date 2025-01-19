#include<iostream>
using namespace std;

void osuf(int n){
    int c=0;
    char str[4];
    int ans[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin>>str[j];
            if(str[j]=='#'){
                c=j+1;
                ans[i]=c;
            }
        }
    }
    for(int j=n; j>0; j--){
        cout<<ans[j-1]<<" ";                                                                                                          
    }
    cout<<endl;
}

int main(){

    int t;
    cin>>t;
    int n;
    for(int i=0; i<t; i++){
        cin>>n;
        osuf(n);
    }
}