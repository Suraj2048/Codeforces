#include<iostream>
#include<math.h>
using namespace std;

string SorN(int n){
    int r = sqrt(n);
    string ans = "Yes";
    int inp[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>inp[i][j];
        }
    }
    if(n == r*r){
        for(int i=0; i<r; i++){
            for(int j=0; j<r; j++){
                if(i==0 or i==n-1){
                    if(inp[i][j]==1){
                        continue;
                    }
                    else{
                        ans = "No";
                    }
                }
                else if(j==0 || j==n-1){
                    if(inp[i][j]==1){
                        continue;
                    }
                    else{
                        ans = "No";
                    }
                }
                else{
                    if(inp[i][j]==0){
                        continue;
                    }
                    else{
                        ans = "No";
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    string *ans = new string[t];
    int n;
    for(int i=0; i<t; i++){
        cin>>n;
        ans[i]=SorN(n);
    }
    for(int i=0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}