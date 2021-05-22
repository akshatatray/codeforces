#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    vector<int> arr;
    int n, sum=0, res=0, count=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<n ; i++) {
        sum += arr[i];
    }
    for (int i=arr.size()-1; i > -1; i-- ) {
        count++;
        sum -= arr[i];
        res += arr[i];
        if (res > sum) {
            break;
        }
    }
    cout<<count;
    return 0;
}