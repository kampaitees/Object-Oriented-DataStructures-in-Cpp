#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int *x = new int;
    int &y = *x;

    y = 4;

    cout << &x << endl; // large address
    cout << x << endl;  // small address
    cout << *x << endl; // 4

    cout << &y << endl; // small address same as x
    cout << y << endl;  // 4

    //cout << *y << endl; // not allowed

    return 0;
}