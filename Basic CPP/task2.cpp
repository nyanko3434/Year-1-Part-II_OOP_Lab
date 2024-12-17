#include<cmath>
#include<iostream>
using namespace std;

inline void BMI(double wt, double ht){
    cout << "BMI : " << (wt / pow(ht,2));
}
int main (){

    double wt, ht;

    cout << "Enter weight : ";
    cin >> wt;
    cout << "Enter height : ";
    cin >> ht;

    BMI(wt, ht);
    return 0;
}