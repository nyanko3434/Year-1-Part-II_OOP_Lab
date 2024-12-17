/*Write a program in CPP to overload unary ++ for postfix and prefix increment operation on time
object with data members- hour, minutes and second, using member function ( implementation
as ++c1 and c2=c1++). [For time t(1, 59, 59), then, resultant of t++ will be t(2,00,00)]*/

#include<iostream>
using namespace std;
class Time{
    int hour;
    int min;
    int sec;

    public:
    Time(int a, int b, int c):hour(a),min(b), sec(c){}
    void display(){
        cout <<"Time: " << hour << " : " << min << " : " << sec << endl;
    }
    void adjust (){
        if (sec < 0 && (hour > 0 || min > 0)){
            sec += 60;
            min--;
        }
        if(min < 0 && hour > 0){
            min +=60;
            hour--; 
        }
        min+=sec/60;
        sec%=60;
        hour += min/60;
        min%=60;
      //  display();
    }
    void operator ++(){
        ++sec;
        adjust();
    }
    Time operator ++(int){
        sec++;
        return *this;
    }

};
int main(){
    
    Time t1(2, 59, 59), t2(5,30,10);
    ++t1;
    t1.display();
    t2 = t1++;
    t2.display();
    return 0;
}