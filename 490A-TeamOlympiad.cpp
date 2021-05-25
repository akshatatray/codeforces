#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> one, two, three;
    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if (x == 1) {
            one.push_back(i);
        } else if (x == 2) {
            two.push_back(i);
        } else {
            three.push_back(i);
        }
    }
    int min = INT_MAX;
    if (one.size() < min) {
        min = one.size();
    }
    if (two.size() < min) {
        min = two.size();
    }
    if (three.size() < min) {
        min = three.size();
    }
    cout<<min<<endl;
    for (int i=0; i<min; i++) {
        cout<<one[one.size() - 1]<<" "<<two[two.size() - 1]<<" "<<three[three.size() - 1]<<endl;
        one.pop_back();
        two.pop_back();
        three.pop_back();
    }
    return 0;
}