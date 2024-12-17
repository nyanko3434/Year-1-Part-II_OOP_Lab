/*Create a class distance with 2 data items as feet and inches. Create 2 objects of above
class and display the data in meters after conversion. (one object takes user input and another
should pass the value to get data.)*/

#include<iostream>
using namespace std;

class Distance{

    double feet;
    double inches;

    public: 
    Distance(double f, double i):feet(f),inches(i){}

    void convertDisplay(){
        double meter;
        meter = (feet*12 + inches) * 0.0254;
        cout << "Distance in meter : " << meter << " m\n";
    }

};

int main(){

    Distance d1(6, 0);
    Distance d2(15,5);
    d1.convertDisplay();
    d2.convertDisplay();
    return 0;
}