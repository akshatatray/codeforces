#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n%2 != 0) {
        cout<<-1<<endl;
    } else {
        for (int i=0; i<n; i++) {
            if (i%2 == 0) {
                cout<<i+2<<" ";
            } else {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}