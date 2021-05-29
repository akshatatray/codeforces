#include <iostream>
using namespace std;

int main () {
    int a, b, first=0, second=0, draw=0;
    cin>>a>>b;
    for (int i=1; i<=6; i++) {
        if (abs(a-i) < abs(b-i)) {
            first++;
        } else if (abs(b-i) < abs(a-i)) {
            second++;
        } else {
            draw++;
        }
    }
    cout<<first<<" "<<draw<<" "<<second<<endl;
    return 0;
}