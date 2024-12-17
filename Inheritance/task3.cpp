/*WAP in CPP to illustrate the concept ofmulti-path inheritance and virtual base class using following
diagram.*/

#include<iostream>
using namespace std;

class Student{
    protected:
        string name;
        int age;
        int roll;
    public:
        Student(){
            cout << "Name: ";
            cin >> name;
            cout << "Age: ";
            cin >> age;
            cout << "Roll no : ";
            cin >> roll;
        }
        void showInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll number: " << roll << endl;
        }
};

class Internal_exam: virtual public Student{
    protected:
        int intmarks;
    public:
        Internal_exam(){
            cout << "Internal marks: ";
            cin >> intmarks;
        }
        void showInMarks(){
            cout << "Internal marks: " << intmarks << endl;
        }
};

class External_exam: virtual public Student{
    protected:
        int extmarks;
    public:
        External_exam(){
            cout<< "External marks : ";
            cin >> extmarks;
        }
        void showExMarks(){
            cout << "External Marks: "<<extmarks<<endl;
        }
};

class Final_result:public Internal_exam, public External_exam{
    int finalmarks = intmarks + extmarks;
    public:
        void showFinalMarks(){
            showInfo();
            showInMarks();
            showExMarks();
            cout << "Final marks: " << finalmarks << endl;
        }
};

int main(){
    Final_result f1;
    f1.showInfo();
    f1.showFinalMarks();
}
























/*


#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int roll;
    public : 
    student(string n, int r): name(n), roll(r){}

};
class Internal_exam{
    protected:
    int interMarks;
    public:
    Internal_exam(int i):interMarks(i){}
};
class External_exam{
    protected:
    int exterMarks;
    public:
    External_exam(int e):exterMarks(e){}
};
class Final_result:virtual public student, public Internal_exam, public External_exam{
    protected:
    int finalMark;
    public:
    Final_result(string n, int r,int i, int e):student(n, r), Internal_exam(i), External_exam(e){
        finalMark= interMarks + exterMarks;
    }
    void end(){
        cout << "Final marks : " << finalMark;
    }
    

    
};
int main(){
    string n;
    int r, i ,e;

    Final_result f(n, r, i, e);
    f.end();
    return 0;
}
*/
/*student(n ,r),Internal_exam(i),External_exam(e)*/