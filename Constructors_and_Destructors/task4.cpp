/*Write a program in CPP to illustrate the order of constructor and destructor invocation in
different scopes, taking class complex with data members real and imaginary. Show the values of
each object created and destroyed. (Use parameterized constuctor)*/

#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    complex(int a, int b):real(a), imaginary(b){
        cout<< real << imaginary
            << "Constructor Invoked\n";
    }
    ~complex(){
        cout<<  real << imaginary
            << "Destructor Invoked\n";
    }
};

int main(){
    complex c1(1,1);
    {
        complex c2(2,2);
    }
    complex c3(3,3);

    return 0;
}