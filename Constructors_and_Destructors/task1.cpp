/*Write a program in CPP to input the name, roll, marks and address of a student from the user and
display the entered details using the concept of class and object.*/

#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    int marks;
    string address;

    public:
    student(string a, int b, int c, string d):name(a), roll(b), marks(c), address(d){}

    void display(){
        cout<< "Name : "<<name
            << "\nRoll no: "<< roll
            << "\nMarks : "<< marks
            << "\nAddress : "<< address << endl;
    }        
};

int main(){
    
    student s("Nayan", 48, 1000, "BKT");
    s.display();
    return 0;
}