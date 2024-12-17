/*Perform task#1 using friend function. (Note: this pointer cannot be used in this case)*/

#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    friend complex sum (complex, complex);
    complex(int a, int b):real(a),imaginary(b){};
    void display(){
        cout << "\nReal Part      : " << real
             << "\nImaginary Part : " << imaginary << endl;
    }
};

complex sum (complex o1, complex o2){
    return complex(o1.real+o2.real, o2.imaginary+ o1.imaginary);
}
int main(){
    
    complex o1(1,1), o2(2,2);
    sum (o1,o2).display();
    return 0;
}