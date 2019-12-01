#include <iostream>
using std::cout;
using std::endl;

class Cube
{
public:
    Cube();
    Cube(double length);
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

Cube::Cube()
{
    length_ = 1;
    cout << "Non Argumented Constructor Invoked!!!" << endl;
    cout << "  " << endl;
}

Cube::Cube(double length)
{
    length_ = length;
    cout << "Argumented Constructor Invoked!!!" << endl;
    cout << "  " << endl;
}

int main()
{
    Cube c1;
    Cube c2(2);

    cout << "Volume of non-argumented constructor:" << c1.getVolume() << endl;
    cout << "  " << endl;
    cout << "Volume of argumented constructor:" << c2.getVolume() << endl;
}