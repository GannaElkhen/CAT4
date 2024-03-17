#include <iostream>
using namespace std;


double SUm(double a,double b){
    return a+b;
}
double SUbtract(double a,double b){
    return a-b;
 }
 double DIvide(double a,double b){
    return a/b;
}
double MUltiply(double a,double b){
    return a*b;
}


int main() {
    double a,b;
    cin >>a>>b;
    if((a<1 && a>5) || (b<1 && b>5 ))
        cout<<"Error";
    else{

       cout<< SUm(a,b)<<"\n";
       cout<< SUbtract(a,b)<<"\n";
       cout<< MUltiply(a,b)<<"\n";
       cout<< DIvide(a,b)<<"\n";
    }

    return 0;
}
