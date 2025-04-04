#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int lower = 0, upper = 0;

    for (char ch : str) {
        if (isupper(ch))
            upper++;
        else
            lower++;
    }

    if (lower >= upper) {
        for (char &ch : str) {
            ch = tolower(ch);
        }
    } else if (upper > lower) {
        for (char &ch : str) {
            ch = toupper(ch);
        }
    }

    cout<<str<<endl;  
    return 0;
}
