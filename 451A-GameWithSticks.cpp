#include<iostream>
using namespace std;

int main () {
    int i, j, res=0;
    cin>>i>>j;
    while (i*j != 0) {
        i--;
        j--;
        res++;
    }
    if (res % 2) {
        cout<<"Akshat"<<endl;
    } else {
        cout<<"Malvika"<<endl;
    }
    return 0;
}