#include <iostream>
#include <string>
using namespace std;
int petya (string a, string b);

int main () {
    string a,b;
    getline(cin, a);
    getline(cin, b);
    int res = petya(a, b);
    cout<<res;
    return 0;
}

int petya (string a, string b) {
    if (a[0] > 64 && a[0] < 91) {
        a[0] += 'a' - 'A';
    }
    if (b[0] > 64 && b[0] < 91) {
        b[0] += 'a' - 'A';
    }
    if (a[0] < b[0]) {
        return -1;
    } if (a[0] > b[0]) {
        return 1;
    } else {
        if (a.length() == 1) {
            return 0;
        } else {
            a.erase(0,1);
            b.erase(0,1);
            return petya(a,  b);
        }
    }
}