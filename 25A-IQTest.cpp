#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> eve, odd;
    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if (x%2 == 0) {
            eve.push_back(i);
        } else {
            odd.push_back(i);
        }
    }
    if (odd.size() < eve.size()) {
        cout<<odd[0]<<endl;
    } else {
        cout<<eve[0]<<endl;
    }
    return 0;
}