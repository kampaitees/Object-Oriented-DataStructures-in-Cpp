#include <iostream>
using std::cout;
using std::endl;

void foo()
{
    int value = 42;
    cout << "Value in foo: " << value << endl;
    cout << "Address of value in foo: " << &value << endl;
}

int main()
{
    int num = 7;

    cout << "Num in main: " << num << endl;
    cout << "Address of num in main: " << &num << endl;

    foo();

    return 0;
}