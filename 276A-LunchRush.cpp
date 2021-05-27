#include <iostream>
using namespace std;

int main () {
    int n, k, fun=INT_MIN;
    cin>>n>>k;
    for (int i=0; i<n; i++) {
        int f, t;
        cin>>f>>t;
        if (t >= k) {
            if ((f-(t-k)) > fun) {
                fun = (f-(t-k));
            }
        } else {
            if (f > fun) {
                fun = f;
            }
        }
    }
    cout<<fun<<endl;
    return 0;
}