/*Write above program(task#5) in CPP which returns 'time' object after addition.*/

#include<iostream>
using namespace std;


class Time
{
    int hour;
    int min;
    int sec;

public:
    Time (){}
    Time(int a, int b, int c) : hour(a), min(b), sec(c) {}

    Time sum(const Time &o)
    {
        return Time(hour+o.hour,min+o.min,sec+o.sec);
    }


    void adjust()
    {
        min += (sec / 60);
        sec %= 60;
        hour += min / 60;
        min %= 60;
    }
    void display(){
        cout<< "Hour : " << hour
            << "\tMin : " << min
            << "\tSec : " << sec<<endl;
    }
};

int main()
{
    Time o2(10, 20, 30);
    Time o3(10, 20, 10);
    Time o1 = o2.sum(o3);
    o1.adjust();
    o1.display();
    
}