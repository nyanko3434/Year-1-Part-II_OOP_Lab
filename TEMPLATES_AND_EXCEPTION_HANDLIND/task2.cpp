/*WAP to create a class template called "calculator" that performs addition, subtraction, multipication and division*/
#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T sub(T a, T b) {
        return a - b;
    }
    T mul(T a, T b) {
        return a * b;
    }
    T div(T a, T b) {
        return a / b;
    }
};

int main() {
    Calculator<int> forInt;
    Calculator<double> fordub;

    cout << "Int addition: " << forInt.add(5, 3) << endl;
    cout << "Double division: " << fordub.div(5.0, 2.0) << endl;

    return 0;
}
