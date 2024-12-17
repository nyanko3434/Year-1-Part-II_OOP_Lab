/*WAP to create a function called sum( ) that returns the sum of the elements of an array.
Make this function into a template so it will work with any numerical type. */

#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int size) {
    T total = 0;
    for (int i = 0; i < size; ++i)
        total += arr[i];
    return total;
}

int main() {
    int intA[] = {1, 2, 3, 4};
    double dubA[] = {5.5, 6.6, 7.7};

    cout << "Sum of int Array: " << sum(intA, 4) << endl;
    cout << "Sum of double Array: " << sum(dubA, 3) << endl;

    return 0;
}