#include <iostream>
#include "Cube.h"
using std::cout;
using std::endl;

int main()
{
    Cube c;
    c.setLength(5);
    double vol = c.getVolume();
    double surArea = c.getSurfaceArea();

    cout << "Volume:" << vol << endl;
    cout << "Surface Area:" << surArea << endl;
}