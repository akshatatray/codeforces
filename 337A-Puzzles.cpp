#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, p, least = INT_MAX;
    cin>>n>>p;
    vector<int> arr;
    for (int i=0; i<p; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    least = arr[n-1]-arr[0];
    for (int i=1; i<p-n+1; i++) {
        if (arr[i+n-1] - arr[i] < least) {
            least = arr[i+n-1] - arr[i];
        }
    }
    cout<<least<<endl;
    return 0;
}