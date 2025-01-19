#include<iostream>
#include<math.h>
using namespace std;

string SorN(int n, string s){
    int r = sqrt(n);
    string ans = "Yes";
    if(n == r*r){
        int idx = 0;
        for(int i=0; i<r; i++){
            for(int j=0; j<r; j++){
                if(i==0 || i==r-1 || j==0 || j==r-1){
                    if(s[idx++] != '1'){
                        ans = "No";
                        break;
                    }
                } else {
                    if(s[idx++] != '0'){
                        ans = "No";
                        break;
                    }
                }
            }
            if(ans == "No") break;
        }
    } else {
        ans = "No";
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<SorN(n, s)<<endl;
    }
    return 0;
}