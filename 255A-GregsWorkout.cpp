#include <iostream>
using namespace std;

int main () {
    int n, a, chest=0, biceps=0, back=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a;
        if (i%3 == 0) {
            chest += a;
        } else if (i%3 == 1) {
            biceps += a;
        } else {
            back += a;
        }
    }
    if (chest > biceps) {
        if (chest > back) {
            cout<<"chest"<<endl;
        } else {
            cout<<"back"<<endl;
        }
    } else {
        if (biceps > back) {
            cout<<"biceps"<<endl;
        } else {
            cout<<"back"<<endl;
        }
    }
    return 0;
}