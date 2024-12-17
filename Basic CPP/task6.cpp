#include<iostream>
using namespace std;

int main (){
    
    double sum = 0, avg;

    int *n = new int;
    cout << "N : ";
    cin >> *n;

    double *a = new double[*n];

    cout << "Enter the elements : \n";
    for(int i = 0; i < *n; i++){
        cin >> a[i];
        sum += a[i]; 
    } 

    cout << "The given elements : \n";
    for(int i = 0; i < *n; i++){
        cout << a[i] <<endl;
    }

    avg = sum / *n;

    cout << "Sum : " << sum << endl
         << "Average : " << avg << endl; 
    delete n;
    delete a;
    return 0;
}