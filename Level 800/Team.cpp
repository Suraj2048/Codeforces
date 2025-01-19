#include <bits/stdc++.h>
using namespace std;

int main() {

int no_problems = 0;
cin>>no_problems;
int response = 0;
int no_todo = 0;
for(int i=0; i < no_problems; i++){
    int count = 0;
    for(int j = 0; j < 3; j++){
        cin>>response;
        if(response == 1)   count++;
    }
    if(count >= 2){
            no_todo++;
        }
}
cout<<no_todo<<endl;
return 0;
}