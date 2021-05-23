#include <iostream>
#include <string.h>
using namespace std;

int main () {
    string s;
    int space=1;
    getline(cin, s);
    for (int i=0; i<s.size(); i++) {
	    if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            i += 2;
            if (!space) {
                cout<<" ";
            }
            continue;
        } else {
            space=0;
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}