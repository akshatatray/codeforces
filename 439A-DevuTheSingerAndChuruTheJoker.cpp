#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, d, res=0, minTime=0;
    cin>>n>>d;
    vector<int> t;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        t.push_back(x);
        minTime += x;
    }
    minTime += (n-1)*10;
    res += (n-1)*2;
    if (minTime > d) {
        cout<<-1<<endl;
        return 0;
    } else {
        res += (d-minTime)/5;
    }
    cout<<res<<endl;
    return 0;
}