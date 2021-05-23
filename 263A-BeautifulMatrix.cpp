#include<iostream>
using namespace std;

int main () {
    int arr[5][5], x, a, b;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin>>x;
            if (x == 1) {
                a = i;
                b = j;
            }
        }
    }
    a -= 2;
    b -= 2;
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    cout<<a+b;
    cout<<endl;
    return 0;
}