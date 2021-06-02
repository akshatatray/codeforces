#include <iostream>
using namespace std;

int main () {
    int n, x, l, r, res=0, cur=1;
    cin>>n>>x;
    for (int i=0; i<n; i++) {
        cin>>l>>r;
        while (cur + x <= l) {
            cur += x;
        }
        res += (r - cur) + 1;
        cur = r + 1;
    }
    cout<<res<<endl;
    return 0;
}