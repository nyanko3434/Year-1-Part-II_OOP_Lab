/*WAP in CPP to illustrate the concept of single inheritance using following diagram.*/
#include<iostream>
using namespace std;

class Employee{
    protected:
    string name;
    int age;
    int salary;

    public:
    void getdata(){
        cout << "Name : ";
        cin >> name;
        cout << "Age : ";
        cin >> age;
        cout << "Salary : ";
        cin >> salary;
    }
};

class Manager : public Employee{
    string department_name;
    string department_location;

    public:
    void getinfo(){
        getdata();
        cout << "Department Name : ";
        cin >> department_name;
        cout << "Departmanet Location : ";
        cin >> department_location; 
    }

    void putinfo(){
        cout << "\nInformations : "
             << "\nName : " << name
             << "\nAge : " << age
             << "\nSalary : " << salary
             << "\nDepartment Nmae : " << department_name
             << "\nDepartment Location : " << department_location;
    }
};
int main(){
    
    Manager m;
    m.getinfo();
    m.putinfo();
    return 0;
}