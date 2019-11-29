#include <iostream>

class Cube
{
public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
};

using std::cout;
using std::endl;

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

Cube *lengthAddress()
{
    Cube c;
    c.setLength(15);
    return &c;
}

int main()
{
    Cube *c = lengthAddress();
    cout << "Address: " << c << endl;

    double vol = c->getVolume();
    double surArea = c->getSurfaceArea();

    cout << "Volume: " << vol << endl;
    cout << "Surface Area: " << surArea << endl;

    return 0;
}