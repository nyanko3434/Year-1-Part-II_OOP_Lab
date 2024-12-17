/*Write a program that sums up two integer data members of two different classes using friend
class. (Hint: A friend class can access all the private and protected members of the class to which
it is friendly)*/

#include<iostream>
using namespace std;

class b;
class a{
    int x;
    public:
    a(int y): x(y){}
    friend class b;
};
class b{
    int y;
    public: 
    b(int x):y(x){}
    int sum(a obj){
        return (y + obj.x);
    }
};
int main(){
    a obj1(5);
    b obj2(10);
    cout << "Sum : " << obj2.sum(obj1);

    return 0;
}