#include<iostream>
using namespace std;

int main () {
    int n, mi=INT_MAX, ma=INT_MIN, a, b;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        if (arr[i] > ma) {
            ma = arr[i];
            a = i;
        }
    }
    for (int i=0; i<n; i++) {
        if (arr[i] <= mi) {
            mi = arr[i];
            b = i;
        }
    }
    cout << a + (n - 1 - b) - (b < a ? 1 : 0) << endl;
    return 0;
}