#include <iostream>
using std::cout;
using std::endl;

class Cube
{
public:
    Cube(double length);
    Cube(const Cube &obj);
    Cube &operator=(const Cube &obj);
    double getVolume();
    double getSurafaceArea();
    void setLength(double length);

private:
    double length_;
};

double Cube::getVolume()
{
    return length_ * length_ * length_;
}

double Cube::getSurafaceArea()
{
    return 6 * length_ * length_;
}

void Cube::setLength(double length)
{
    length_ = length;
}

Cube::Cube(double length)
{
    length_ = length;
    cout << "Created $" << getVolume() << endl;
}

Cube::Cube(const Cube &obj)
{
    length_ = obj.length_;
    cout << "Created $" << getVolume() << " via copy" << endl;
}

Cube &Cube::operator=(const Cube &obj)
{

    cout << "Transformed $" << getVolume() << " -> $" << obj.length_ * obj.length_ * obj.length_ << endl;
    length_ = obj.length_;
    return *this;
}

bool sendCube(Cube c)
{
    // Logic to send a Cube somewhere...
    return true;
}
int main()
{
    Cube c(10);
    sendCube(c);

    return 0;
}
