/*Write a program to show the invocation order of constructor and destructor. Create a class with
data members- ObjectNumber and Count and it should display the message "Object n created"
and "Object n goes out of the scope" whenever constructor or destructor is invoked. Also use the
concept of static data member and static member function.*/

#include<iostream>
using namespace std;

class className{

    int x;
    int objectNumber;

    public:
    static int Count;
    static void increCount(){
        Count++;
    }
    className(int a):x(a), objectNumber(Count){
        increCount();
    }
    
    static void displayCount(){
        cout << "Number of objects : " << Count<<endl;
    }
};

int className::Count = 0;

int main(){
    
    className::displayCount();
    className obj1(5);
    className obj2(55);
    cout << "Number of objects : " << className :: Count<<endl;
    return 0;
}