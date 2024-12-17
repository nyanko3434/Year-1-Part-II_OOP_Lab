/*WAP with function that takes two arguments as reference and swap their values. Also
write its equivalent function with pointer notation.*/

#include<iostream>
using namespace std;
void swap (int &x, int &y){
    int tem = x;
    x = y;
    y = tem;
}

int main (){
    int a = 10, b = 5;

    cout << "Before swap : \na = " << a <<"\tb = " << b << endl;
    swap(a,b);
    cout << "After swap : \na = " << a <<"\tb = " << b << endl;

    return 0;
}