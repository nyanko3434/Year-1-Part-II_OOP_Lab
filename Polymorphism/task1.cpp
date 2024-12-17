/*Write a program to create a class shape with functions to find the area of the shapes. Create
derived classes circle, rectangle, and triangle each having overriding
functions area( ) and display( ) to illustrate virtual functions.*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area(){
        return 0;
    };
    virtual void display(){};
};

class Circle : public Shape {
    double r;
public:
    Circle(double x) : r(x) {}
    double area() override {
        return 3.14 * r * r; 
    }
    void display() override {
        cout << "Circle Area: " << area() << endl;
    }
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double x, double y) : w(x), h(y) {}
    double area() override {
        return w * h;
    }
    void display() override {
    cout << "Rectangle Area: " << area() << endl;
    }
};

class Triangle : public Shape {
    double b, h;
public:
    Triangle(double x, double y) : b(x), h(y) {}
    double area() override {
        return 0.5 * b * h; 
    }
    void display() override {
        cout << "Triangle Area: " << area() << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(5, 5);
    Triangle t(5, 5);

    c.display();
    r.display();
    t.display();

    return 0;
}