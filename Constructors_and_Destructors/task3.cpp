/*Write a program in CPP to illustrate the concept of constructor (default, parameterized and copy
constructor) and destructor, taking class complex with data members real and imaginary. Show
the values of each object created.*/
#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    complex(): real(0),imaginary(0){}
    complex(int a, int b):real(a), imaginary(b){}

    complex(complex& o){
        real = o.real;
        imaginary = o.imaginary;
    }

    void display(){
        cout<< "\nReal Part : " << real
            << "\nImaginary : " << imaginary<<endl;
    }
};
int main(){
    complex c1;
    complex c2(25,66);
    complex c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}