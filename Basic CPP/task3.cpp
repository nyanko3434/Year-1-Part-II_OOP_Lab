#include<iostream>
using namespace std;

void fee (int tuition, int lunch = 0, int transportation = 3000){
    cout << "monthly fee : " << (tuition + transportation + lunch) << endl;
}

int main(){
    cout << "In Primary school : \n";
    fee(5000, 2000, 2000);

    cout << "In Middle school : \n";
    fee(8000, 3000);

    cout << "In High school : \n";
    fee(10000);

    return 0;
    
}