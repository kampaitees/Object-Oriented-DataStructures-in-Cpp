#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int num = 7;

    cout << " Num: " << num << endl;
    cout << "&Num: " << &num << endl;

    int *p = &num;

    cout << " p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    *p = 42;

    cout << "*p changed to 42" << endl;
    cout << " num: " << num << endl;

    return 0;
}