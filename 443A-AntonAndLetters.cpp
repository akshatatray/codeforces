#include <iostream>
#include <set>
#include <string.h>
using namespace std;

int main () {
    string s;
    set<char> res;
    getline(cin, s);
    for (int i=1; i<s.size()-1; i++) {
        if (i%3 == 1) {
            res.insert(s[i]);
        }
    }
    cout<<res.size()<<endl;
    return 0;
}