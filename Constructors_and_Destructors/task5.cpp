/*Write a program in CPP to find the “sum” of two objects of type 'time' with members – hour,
minute and second using the OOP concept. In the main function, “sum” function should be
invoked as object1.sum(object2,object3) as well as object1.sum(object2). (NOTE: DO NOT
RETURN OBJECT FOR THIS TASK)*/

#include <iostream>
using namespace std;

class Time
{
    int hour;
    int min;
    int sec;

public:
    Time (){}
    Time(int a, int b, int c) : hour(a), min(b), sec(c) {}

    void sum(const Time &o2, const Time &o3)
    {
        hour = o2.hour + o3.hour;
        min = o2.min + o3.min;
        sec = o2.sec + o3.sec;
    }

    void sum(const Time &o2)
    {
        hour += o2.hour;
        min += o2.min;
        sec += o2.sec;
    }

    void adjust()
    {
        min += (sec / 60);
        sec %= 60;
        hour += min / 60;
        min %= 60;
    }
    void dispaly(){
        cout<< "Hour : " << hour
            << "Min : " << min
            << "Sec : " << sec<<endl;
    }
};

int main()
{
    Time o1;
    Time o2(10, 20, 30);
    Time o3(10, 20, 50);
    o1.sum(o2,o3);
    o1.adjust();
    o1.dispaly();
    o1.sum(o2);
    o1.adjust();
    o1.dispaly();
    
}