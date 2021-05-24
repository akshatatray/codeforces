#include <iostream>
using namespace std;
 
int main () {
    int n, m, a, b, sum=0;
    cin>>n>>m>>a>>b;
    float mper = (float)b/m;
    if (mper < a) {
        sum += (n/m)*b;
        n -= (n/m)*m;
    } else {
        sum += n*a;
        n=0;
    }
    if (n) {
        if (n < m && b < n*a) {
            sum += b;
        } else {
            sum += n*a;
        }
    }
    cout<<sum<<endl;
    return 0;
}