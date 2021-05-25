#include <iostream>
using namespace std;

int main () {
    int n, m, res;
    cin>>n>>m;
    if (n<m) {
        cout<<-1<<endl;
    } else {
        n % 2 == 0 ? res = n/2 : res = (n/2)+1;
        while (res % m != 0) {
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}