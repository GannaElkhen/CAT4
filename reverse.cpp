#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void reverse(string s){int n=0;
    int a=size(s);
    char A[a];
    for(int i=a-1;i>=0;i--){
        A[i]=s[n];
        n++;
    }
    for(int i=0;i<a;i++){
        cout<<A[i];
    }
}
int main() {
    string s;
    cin>>s;
    reverse(s);
    return 0;
}
