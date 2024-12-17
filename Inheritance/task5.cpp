/*WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance.*/
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout << "A constructor\n";
    }
    ~A(){
        cout << "A destuctor\n";
    }
};
class B{
    public:
    B(){
        cout << "B constructor\n";
    }
    ~B(){
        cout << "B destuctor\n";
    }
};
class C{
    public:
    C(){
        cout << "C constructor\n";
    }
    ~C(){
        cout << "C destuctor\n";
    }
};
class D:public A, public B , virtual public C{
    public:
    D(){
        cout << "D constructor\n";
    }
    ~D(){
        cout << "D destuctor\n";
    }
};
int main(){
    
    D d;
    return 0;
}