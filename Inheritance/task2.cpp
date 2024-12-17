/*WAP in CPP to illustrate the concept ofmultiple inheritance using following diagram. Also use the concept
of function overriding assuming suitable data members and member functions.*/
#include<iostream>
using namespace std;
class teacher{
    public :
    void teach(){
        cout << "Teaching in Progress.....\n";
    }
};
class student{
    public: 
    void learn(){
        cout << "Learning in Progress......\n";
    }
};
class teaching_assitant:public teacher, public student{
    public:
    void teach(){
        cout << "Learning while Teaching in Progress....\n";
    }
};
int main(){
    teaching_assitant TA;
    cout << "Calling TA.teach()\t";
    TA.teach();
    cout << "Calling TA.teacher::teach()\t";
    TA.teacher::teach();

    return 0;
}