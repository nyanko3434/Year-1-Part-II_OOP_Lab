/*Write a program to find the sum of two objects of type 'complex' with data members – real and
imaginary. The function should take object as argument and return the object. Use the concept of
this pointer to return object. Also show the use of this pointer wherever possible.*/

#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    complex(int a, int b):real(a), imaginary(b){}

    complex sum(complex o){
        this->real += o.real;
        this->imaginary += o.imaginary;
        return *this;
    }

    void display(){
        cout << "\nReal Part      : " << real
             << "\nImaginary Part : " << imaginary << endl;
    }
};
int main(){
    
    complex obj1(1,1), obj2 (2,2);
    obj1.sum(obj2).display();
    return 0;
}