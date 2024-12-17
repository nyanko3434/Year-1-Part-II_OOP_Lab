/*Create a polymorphic class Shape and create other derived classes Circle, Rectangle, and triangle from Shape. Illustrate RTTI by the use of dynamic_cast and typeid operators in this
program.*/
#include <iostream>
#include <typeinfo>
using namespace std;

class Shape {
public:
    virtual void name() const = 0;
};

class Circle : public Shape {
public:
    void name() const override {
        cout << "Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void name() const override {
        cout << "Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void name() const override {
        cout << "Triangle\n";
    }
};

void identifyShape(const Shape* shape) {
    if (const Circle* c = dynamic_cast<const Circle*>(shape))
        cout << "This is a Circle\n";
    else if (const Rectangle* r = dynamic_cast<const Rectangle*>(shape))
        cout << "This is a Rectangle\n";
    else if (const Triangle* t = dynamic_cast<const Triangle*>(shape))
        cout << "This is a Triangle\n";
    else
        cout << "Unknown Shape\n";
}

int main() {
    Shape* shapes[] = { new Circle(), new Rectangle(), new Triangle() };

    for (Shape* shape : shapes) {
        shape->name();
        identifyShape(shape);
        cout << "Type: " << typeid(*shape).name()<< endl;
        delete shape;
    }
    //cout << typeid(*shapes[0]).name();
    return 0;
}