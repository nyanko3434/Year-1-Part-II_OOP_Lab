/*WAP to create a class “Shape” and calculate the area of rectangle, square and circle
and display the result as well.*/

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;
class Shape {

    public : 
    Shape (double r){
        cout << "Area of Circle    : " << pi*r*r << endl;
    }
    Shape (double l, double b){
        cout << "Area of Rectangle : " << l*b << endl;
    }
    Shape (int l){
        cout << "Area of Square    : " << l*l << endl;
    }
};

int main(){
    Shape cir((double)7), rec(5,4), squ(4);
    return 0;
}