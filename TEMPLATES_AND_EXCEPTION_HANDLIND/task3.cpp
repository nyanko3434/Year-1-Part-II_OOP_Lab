/*WAP to illustrate the multiple exception handling.*/
#include <iostream>
using namespace std;

int main() {

    try {
        throw 'l';
    } catch (const char* e) {
        cout << "Caught string : " << e << endl;
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (double e) {
        cout << "Caught double: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}