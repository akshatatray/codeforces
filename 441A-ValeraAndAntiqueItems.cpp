#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, v, res=0;
    vector<int> sellers;
    cin>>n>>v;
    for (int j=0; j<n; j++) {
        int x, f=0;
        cin>>x;
        for (int i=0; i<x; i++) {
            int bid;
            cin>>bid;
            if (bid < v && f==0) {
                res++;
                sellers.push_back(j+1);
                f=1;
            }
        }
    }
    cout<<res<<endl;
    for (int i=0; i<sellers.size(); i++) {
        cout<<sellers[i]<<" ";
    }
    return 0;
}