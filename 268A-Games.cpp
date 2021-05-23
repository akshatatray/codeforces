#include<iostream>
#include<vector>
using namespace std;

int main () {
    int n, hc, ac, res=0;
    cin>>n;
    vector<int> h, a;
    for (int i=0; i<n; i++) {
        cin>>hc>>ac;
        h.push_back(hc);
        a.push_back(ac);
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (h[i] == a[j]) {
                res++;
            }
            if (a[i] == h[j]) {
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}