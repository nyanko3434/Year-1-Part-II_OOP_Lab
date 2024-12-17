/*'-' overloading*/
#include<iostream>
using namespace std;
class abc{
    private:
        int a;
    public:
        abc():a(0){}
        abc(int x):a(x){}
        abc operator -(){
            a = -a;
            return *this;
        }
        void show(){
            cout << "a: " << a << endl;
        }
};

int main(){
    abc obj(10);
    obj.show();
    -obj;
    obj.show();
    abc obj2;
    obj2.show();    
    obj2 = -obj;
    obj2.show();  
    return 0;
}