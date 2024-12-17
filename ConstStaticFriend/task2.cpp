/*Write a program in CPP to illustrate the relationship between constant object, constant
member function, non-constant object, non-constant member function.*/
#include<iostream>
using namespace std;

class className{
    int x;
    int y;
    public:
    className(int a, int b):x(a), y(b){}
    void showValue() const{
        cout << "x : " << x << "\ty : " << y <<endl;
    }
    void incse(){
        x++;
    }

};
int main(){
    className obj1(8, 8);
    const className obj2(4, 4);
    obj1.incse();
    // obj2.incse();: shows error
    obj1.showValue();
    obj2.showValue();
    return 0;
}