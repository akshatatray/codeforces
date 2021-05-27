#include <iostream>
using namespace std;

int main () {
    int n, check=0;
    cin>>n;
    char res[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> res[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        int flag = 0;
        for (int j=0; j<n; j++) {
            if (i-1 >= 0 && res[i-1][j] == 'o') {
                flag++;
            }
            if (i+1 < n && res[i+1][j] == 'o') {
                flag++;
            }
            if (j-1 >= 0 && res[i][j-1] == 'o') {
                flag++;
            }
            if (j+1 < n && res[i][j+1] == 'o') {
                flag++;
            }
            if (flag % 2 != 0) {
                check++;
            }
        }
    }
    if (check == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}