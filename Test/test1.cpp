/*get()*/
#include<iostream>
using namespace std;

int main(){
    char str[50];
    cin.get(str, 50,'*');
    cout << endl;
    cout.put(*str);
    cout << endl << str;
    return 0;
}