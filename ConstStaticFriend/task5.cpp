/*Write a program that sums up two integer data members of two different classes using friend
function.*/

#include<iostream>
using namespace std;

class b;
class a{
    int x;
    public:
    a(int y):x(y){}
    friend int sum (a,b);
};
class b{
    int y;
    public:
    b(int x):y(x){}
    friend int sum(a,b);
};

int sum (a o1, b o2){
    return (o1.x,o2.y);
}

int main(){
    a obj1(10);
    b obj2(15);
    cout << "Sum : " << sum(obj1, obj2);
    return 0;
}