#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string a, res;
    int one=0, two=0, three=0;
    getline(cin, a);
    for (int i=0; i<a.length(); i++) {
        if (a[i] == '+') {
            continue;
        }
        else if (a[i] == '1') {
            one++;
        } else if (a[i] == '2') {
            two++;
        } else {
            three++;
        }
    }
    while (one--) {
        res.append(1, '1');
        res.append(1, '+');
    }
    while (two--) {
        res.append(1, '2');
        res.append(1, '+');
    }
    while (three--) {
        res.append(1, '3');
        res.append(1, '+');
    }
    res.erase(res.length()-1, res.length());
    cout<<res;
    return 0;
}