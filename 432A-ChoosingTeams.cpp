#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, k;
    cin>>n>>k;
    vector<int> res;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        if ((x+k) <= 5) {
            res.push_back(x+k);
        }
    }
    cout<<res.size()/3<<endl;
    return 0;
}