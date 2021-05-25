#include <iostream>
using namespace std;

int main () {
    int n, m, f=0;
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        if (i%2 == 0) {
            for (int j=0; j<m; j++) {
                cout<<"#";
            }
        } else {
            ++f;
            for (int j=0; j<m; j++) {
                if (f%2 == 1 && j==m-1) {
                    cout<<"#";
                } else if (f%2==0 && j == 0) {
                    cout<<"#";
                } else {
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}