#include <iostream>
using std::cout;
using std::endl;

class Cube
{
public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
};

double Cube::getVolume()
{
    return length_ * length_ * length_;
}

double Cube::getSurfaceArea()
{
    return 6 * length_ * length_;
}

void Cube::setLength(double length)
{
    length_ = length;
}

int main()
{
    int *p = new int;
    Cube *c = new Cube;

    *p = 42;
    (*c).setLength(14); // c->setLength(14);

    cout << "Address of p stored in stack memory having value of p in heap memory: " << &p << endl;
    cout << "Value of p stored in heap memory: " << *p << endl;
    // cout << "Address of c: " << &c << endl;

    delete p;
    p = nullptr;

    delete c;
    c = nullptr;

    return 0;
}
