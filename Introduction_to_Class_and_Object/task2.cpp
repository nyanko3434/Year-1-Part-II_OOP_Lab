/*WAP with function that takes three arguments as reference - n1, n2 and n3 and return
‘average’ as a reference . Use ‘const’ argument wherever necessary.*/

#include<iostream>
using namespace std;

const int argnum = 3;

double &average (double& a, double&  b, double& c){
    a += b+c;
    a /= argnum;
    return a;
}

int main (){
    double n1{5},n2{10},n3{15};
    double &ave = average(n1,n2,n3);
    cout <<"Average : " << ave << endl;
    return 0;
}