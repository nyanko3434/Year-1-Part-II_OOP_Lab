/*Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by
overloading binary * operator.*/

#include<iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:
    Matrix (const Matrix& x){
       for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                a[i][j] = x.a[i][j];
    }
    Matrix(){
        setData();
    }
    
    void setData(){
        cout << "Enter the elements of matrix : \n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        display();
    }

    void display(){
        cout << "\nMatrix : \n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
                cout << a[i][j] <<"\t";
            cout << endl;
        }
    }
    Matrix operator * (Matrix obj){
        Matrix x;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j = 0)
                for (int k = 0; k < 3; k++)
                    x.a[i][j]+=a[i][k]*obj.a[k][j];
        return Matrix(x);
    
    }
};
int main(){
   Matrix m1, m2;
   Matrix m3 (m1 * m2);
   m3.display();


    return 0;
}