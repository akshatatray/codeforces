#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, c, res=0, gap=INT_MIN;
    cin>>n>>c;
    vector<int> price;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        price.push_back(x);
    }
    for (int i=0; i<n-1; i++) {
        if (price[i] - price[i+1] > gap) {
            gap = price[i] - price[i+1];
        }
    }
    res = gap - c;
    if (res < 0) {
        cout<<0<<endl;
    } else {
        cout<<res<<endl;
    }
    return 0;
}