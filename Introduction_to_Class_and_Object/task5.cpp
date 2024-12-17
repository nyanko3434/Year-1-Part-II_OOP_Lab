/*Create a class vehicle with 3 data members as model number, model name and cost.
Create 2 different objects of above class and display their model number, model name and cost.*/

#include<iostream>
#include<string>
using namespace std;
class vehicle {
    int modelNumber;
    string modelName;
    double cost;

    public:
    vehicle(int x, string y, double z) : modelNumber(x), modelName(y), cost(z){}
    void display(){
        cout <<   "Model Numbur : " << modelNumber
             << "\nModel Name   : " << modelName
             << "\nCost         : " << cost << "\n\n";
    }
};
int main(){
    
    vehicle v1(999,"AAA", 100);
    v1.display();
    vehicle v2(888,"BBB", 200);
    v2.display();
    return 0;
}