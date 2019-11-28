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
    Cube c;
    c.setLength(5);
    double vol = c.getVolume();
    double surArea = c.getSurfaceArea();

    cout << "Volume:" << vol << endl;
    cout << "Surface Area:" << surArea << endl;
}