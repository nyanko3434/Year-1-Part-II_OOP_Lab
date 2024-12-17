/*Write a program in CPP to overload unary -- for postfix and prefix decrement operations for
Task#1 using non-member/friend function ( implementation as c1-- and c2= --c1).*/

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
        adjust();
        return *this;
    }

    friend void operator --(Time&);
    friend Time operator --(Time&, int);
};
void operator --(Time &obj){
    --obj.sec;
    obj.adjust();
}
Time operator --(Time &obj, int){
    obj.sec--;
    obj.adjust();
    return obj;
}
int main(){
    
    Time t1(2, 59, 0), t2(5,30,10);
    --t1;
    t1.display();
    t2 = t1--;
    t2.display();
    return 0;
}