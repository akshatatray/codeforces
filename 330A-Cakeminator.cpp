#include <iostream>
#include <string>
using namespace std;

int main () {
    int r, c, res=0, ith[11] = {0}, jth[11] = {0};
    string s;
    cin>>r>>c;
    for (int i=0; i<r; i++) {
        cin>>s;
        for (int j=0; j<c; j++) {
            if (s[j] == 'S') {
                ith[i] = 1;
                jth[j] = 1;
            }
        }
    }
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (ith[i] == 0 || jth[j] == 0) {
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}