/*WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance.*/
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout << "A constructor\n";
    }
    ~A(){
        cout << "A destructor\n";
    }
};
class B:public A{
    public:
    B(){
        cout << "B constructor\n";
    }
    ~B(){
        cout << "B destructor\n";
    }
};
int main(){
    
    B b;
    return 0;
}