/*Write a program in CPP to convert the distance in meters entered by the user into distance in feet
and inch using the concept of basic to user defined data conversion.*/
#include<iostream>
using namespace std;

class dis{
    private:
        int feet;
        float inch;
    public:
        dis():feet(0),inch(0){}
        dis(float m){
            float totalInch = m * 39.3701;
            feet = totalInch / 12;
            inch = totalInch - (feet * 12);
        }
        void show(){
            cout << "Feet: " << feet << " Inch: " << inch << endl;
        }
};

 
int main(){
    float m;
    cout << "Enter distance in meters: ";
    cin >> m;
    dis d(m);
    d.show();
    return 0;
}