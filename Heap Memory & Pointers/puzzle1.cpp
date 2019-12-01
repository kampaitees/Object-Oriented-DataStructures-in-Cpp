#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 2, j = 4, k = 8;
    int *p = &i, *q = &j, *r = &k;

    k = i;
    cout << i << j << k << *p << *q << *r << endl; // 2 4 2 2 4 2

    p = q;
    cout << i << j << k << *p << *q << *r << endl; // 2 4 2 4 4 2

    *q = *r;
    cout << i << j << k << *p << *q << *r << endl; // 2 2 2 2 2 2

    return 0;
}