#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n >= 0) {
        string x;
        getline(cin, x);
        if (x.length() > 10) {
            cout<<x[0]<<x.length()-2<<x[x.length()-1]<<"\n";
        } else {
            cout<<x<<"\n";
        }
        n--;
    }
    return 0;
}