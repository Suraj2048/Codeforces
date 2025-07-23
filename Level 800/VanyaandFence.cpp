#include <bits/stdc++.h>
using namespace std;

int main() {

int nf;
int hf;

cin>>nf>>hf;

int result = nf;

for(int i=0; i<nf; i++){
    int h = 0;
    cin>>h;
    if(h > hf) result++;
    
}
cout<<result;

return 0;
}