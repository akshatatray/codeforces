#include<iostream>
using namespace std;

int maxPoint (int p, int t) {
    int x = ((3*p)/10), y = (p - (p/250 * t));
    return x > y ? x : y;
}

int main () {
    int a,b,c,d,m,v;
    cin>>a>>b>>c>>d;
    m = maxPoint(a, c);
    v = maxPoint(b, d);
    if (m > v) {
        cout<<"Misha"<<endl;
    } else if (v > m) {
        cout<<"Vasya"<<endl;
    } else {
        cout<<"Tie"<<endl;
    }
    return 0;
}