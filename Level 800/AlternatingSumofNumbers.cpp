#include<iostream>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t!=0){
        int n;
        cin>>n;
        int c=0;
        int x = 0;
        int y = 0; 
        while(n!=0){
            cin>>x;
            if(c%2==0){
                y=y+x;
                c++;
                n--;
            }
            else{
                y=y-x;
                c++;
                n--;
            }
        }
        cout<<y<<endl;
        t--;
    }
    return 0;
}