#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int *p, *q;
    p = new int;
    q = p;

    *q = 8;

    cout << *p << endl; // 8

    q = new int;
    *q = 9;

    cout << *p << endl; // 8
    cout << *q << endl; // 9

    return 0;
}