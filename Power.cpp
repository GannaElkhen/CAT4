#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int n,m,M=1;
void set_power(int a[],int n,int m){
    for(int i=0;i<n;i++){
if(i==0)
a[0]=1;
else
 M*=m;
a[i]=M;
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

int main(){
cin>>n>>m;
int a[n];
set_power(a,n,m);



return 0;


}
