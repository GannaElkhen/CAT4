#include <iostream>
using namespace std;

int n,s=0,sum=0;
int palandriom(int a[]){
int b[n];
for(int i=n-1;i>=0;i--){

   b[i] =a[s];
   s++;
}
for(int i=0;i<n;i++){
    if(b[i]==a[i])
sum+=1;
}
if(sum==n)
cout<<"Yes,it is a palandirom array ";
else
cout<<"No,it is  not a palandirom array";
return 0;
}


int main() {
  cin>>n;
 int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

palandriom(a);
    return 0;
}
