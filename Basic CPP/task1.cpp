#include<iostream>
using namespace std;

    typedef struct complex{
        double x, y;
    }complex;

    void display_complex (complex z){
        cout << z.x << "+ i " << z.y << endl;
    }
    
    void add_complex(complex a, complex b){
        complex c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        display_complex (c);
    }

    int main(){
        complex a[2];
        for (int i = 0; i < 2; i++){
            cout << "Enter the "<< i +1  << "th complex number : \n";
            cout << "x  = ";
            cin >> a[i].x;
            cout << "y  = ";
            cin >> a[i].y;
        }

        add_complex(a[0], a[1]);

        return 0;
    }
