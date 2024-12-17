/*Write above program(task#1) in CPP for 'n' students.*/

#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    int marks;
    string address;

    public:
    student(string a, int b, int c, string d):name(a), roll(b), marks(c), address(d){}
    student(){}
    void setdata(){
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Roll no. : ";
        cin >> roll;
        cout << "Enter Marks : ";
        cin >> marks;
        cout << "Enter Address : "; 
        cin  >> address;
    }  
    void display(){
        cout<< "\nName : "<<name
            << "\nRoll no: "<< roll
            << "\nMarks : "<< marks
            << "\nAddress : "<< address << endl;
    }        
};

int main(){
    int n;
    cout << "Enter the number of students : ";
    cin >> n;

    student s[n];
    cout << "Enter the details of students : \n";

    for (int i = 0; i < n; i++){
        s[i].setdata();
    }
    cout <<"\nThe given data : ";
    for (int i = 0; i < n; i++){
        s[i].display();
    }

    return 0;
}