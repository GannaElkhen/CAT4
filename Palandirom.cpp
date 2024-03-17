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

        SUm(a,b);
        SUbtract(a,b);
        MUltiply(a,b);
        DIvide(a,b);
    }

    return 0;
}
