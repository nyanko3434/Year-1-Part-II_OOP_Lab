/*WAP with function that takes two arguments as reference. The function returns
reference argument which is of greater value so that it can be assigned specific value (say 500)
when function is being invoked.*/

#include<iostream>
using namespace std;

int &great (int &x, int &y){
    return (x > y)? x : y; 
}

int main (){
    int a , b;
    cout << "Enter any two numbers : \n";
    cin >> a >>b;

    great(a,b)=500;
    cout << "Final values : \na = " << a <<"\tb = " << b << endl;

    return 0;
}