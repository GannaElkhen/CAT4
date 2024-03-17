#include <iostream>
using namespace std ;int MAX1(int a, int b, int c) {
    int max1;
    if(a>=b&&a>=c)
        max1=a;
    else if(b>=a&&b>=c)
        max1=b;
    else max1=c;
    return max1;
}

int MAX2(int d,int e,int f){
    int max2;
    if(d>=e&&d>=f)
        max2=d;
    else if(e>=d&&e>=f)
        max2=e;
    else max2=f;
    return max2;

}


int main() {
   int a,b,c,d,e,f,max1,max2;
   cin>>a>>b>>c>>d>>e>>f;
   max1=MAX1(a,b,c);
   max2=MAX2(d,e,f);
   if(max1>=max2)
       cout<<max1;
   else
       cout<<max2;
    return 0;
}
