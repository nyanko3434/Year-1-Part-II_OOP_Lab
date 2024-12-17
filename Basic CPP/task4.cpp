#include <iostream>
using namespace std;

void squ(int a){
    cout << "\nWhen integer passed: \n square : " << a *a << endl; 
}

void squ(double a){
    cout << "\nWhen decimal value passed: \n square : " << a *a << endl; 
}

void squ(float a){
    cout << "\nWhen decimal value passed with float type casting : \n square : " << a *a << endl;   
}


int main(){
    squ(5);
    squ(5.5);
    squ((float)5.5);
    return 0;
}