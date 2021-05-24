#include <iostream>
#include <vector>
using namespace std;

int main () {
    int p, px, py;
    vector<int> x, y, c;
    cin>>p;
    for (int i=0; i<p; i++) {
        c.push_back(0);
    }
    cin>>px;
    for (int i=0; i<px; i++) {
        int a;
        cin>>a;
        c[a-1]++;
    }
    cin>>py;
    for (int i=0; i<py; i++) {
        int a;
        cin>>a;
        c[a-1]++;
    }
    for (int i=0; i<p; i++) {
        if (c[i] == 0) {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}