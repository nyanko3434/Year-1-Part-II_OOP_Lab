#include<iostream>
using namespace std;

void perimeter(double r){
    cout << "Perimeter of circle : " << 3.14 * 2 * r << endl;
}

void perimeter(double l, double b){
    cout << "Perimeter of rectangle : "  << 2*l*b <<endl;
}

void perimeter(double a, double b, double c){
    cout << "Perimeter of triangle : "  <<a+b+c << endl;
}

int main(){
    double a, b,c;

    cout << "Enter the radius of circle : ";
    cin >> a;
    perimeter(a);

    cout << "Enter the lenght and breath of rectangle : \n";
    cin >> a >> b;
    perimeter (a,b);

    cout << "Enter the lenghts of sides of triangle : \n";
    cin >> a >> b >> c;
    perimeter (a,b,c);

    return 0;
}
