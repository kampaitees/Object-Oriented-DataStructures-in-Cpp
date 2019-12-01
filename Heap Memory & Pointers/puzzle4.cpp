#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int *x;
    int size = 3;
    x = new int[size];

    for (int i = 0; i < size; i++)
        x[i] = i + 3;

    for (int j = 0; j < size; j++)
        cout << x[j] << endl;

    /* Output
    3
    4
    5
    */

    delete[] x;
}