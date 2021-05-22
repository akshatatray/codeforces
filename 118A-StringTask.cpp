#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string x, res;
    getline(cin, x);
    for ( int i=0; i<x.length(); i++ ) {
        char t;
        if ( x[i] < 91 ) {
            x[i] += 'a' - 'A';
        }
        if (x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u' && x[i] != 'y') {
            res.append(1, '.');
            res.append(1, x[i]);
        }
    }
    cout<<res<<"\n";
    return 0;
}