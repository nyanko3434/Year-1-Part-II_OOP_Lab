/*WAP to illustrate how to declare, define and realize a namespace mechanism. Define
two namespaces “doctors” and “engineers” with members - salary and function to increase their
salary by 10% and 15% respectively. Use different techniques to access the members. Also
illustrate how do you access the members of one namespace through another namespace.*/

#include<iostream>
using namespace std;


namespace engineers{
    double salary;

    void increse(){
        salary *= 1.15;
    }
}

namespace doctors{
    double salary;

    void increse(){
        salary *= 1.1;
        engineers::increse();
    }
}

int main (){
    using namespace doctors;
    salary = 50000;
    engineers::salary = 60000;
    cout << "Before increse : \nDoctors' salary : "<< salary << "\tEngineers' salary : "<< engineers::salary <<endl;
    increse();
    cout << "After increse : \nDoctors' salary : "<< salary << "\tEngineers' salary : "<< engineers::salary <<endl;

    return 0;
}