#include<iostream>
#include<string.h>
using namespace std;

int main () {
    int i,j,res=0;
    string s;
    getline(cin, s);
    if (s.length() < 5) {
        cout<<"NO";
        return 0;
    }
    for (i=0; i<s.length()-4; i++) {
        if (s[i] == 'h') {
            res++;
            break;
        }
    }
    if (res==0) {
        cout<<"NO";
        return 0;
    }
    for (j=i+1; j<s.length()-3; j++) {
        if (s[j] == 'e') {
            res++;
            break;
        }
    }
    if (res<2) {
        cout<<"NO";
        return 0;
    }
    for (i=j+1; i<s.length()-2; i++) {
        if (s[i] == 'l') {
            res++;
            break;
        }
    }
    if (res<3) {
        cout<<"NO";
        return 0;
    }
    for (j=i+1; j<s.length()-1; j++) {
        if (s[j] == 'l') {
            res++;
            break;
        }
    }
    if (res<4) {
        cout<<"NO";
        return 0;
    }
    for (i=j+1; i<s.length(); i++) {
        if (s[i] == 'o') {
            res++;
            break;
        }
    }
    if (res == 5) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}