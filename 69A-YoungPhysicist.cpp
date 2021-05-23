#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main () {
    int n, x, y, z;
    vector<int> a,b,c;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>x>>y>>z;
        a.push_back(x);
        b.push_back(y);
        c.push_back(z);
    }
    int asum = accumulate(a.begin(), a.end(), 0);
    int bsum = accumulate(b.begin(), b.end(), 0);
    int csum = accumulate(c.begin(), c.end(), 0);
    if (!asum && !bsum && !csum) {
        cout<<"YES"<< endl;
    } else {
        cout<<"NO"<< endl;
    }
    return 0;
}