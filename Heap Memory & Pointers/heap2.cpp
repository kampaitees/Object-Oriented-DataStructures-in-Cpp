#include <iostream>
using std::cout;
using std::endl;

int main()
{

    int *p = new int;
    int *q = p;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    delete p;
    cout << "p after releasing it's memory: " << p << endl;

    cout << "q after releasing p's memory: " << q << endl;
    delete q;
    cout << "q after releasing q's memory: " << q << endl;

    p = nullptr;
    q = nullptr;

    cout << "p after assigning it to null pointer: " << p << endl;
    cout << "q after assigning it to null pointer: " << q << endl;

    return 0;
}