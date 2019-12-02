#include <iostream>
using std::cout;
using std::endl;

class Cube
{
public:
    Cube();
    Cube(double length);
    Cube(const Cube &obj);
    Cube &operator=(const Cube &obj);
    ~Cube();
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

Cube::Cube()
{
    length_ = 1;
    cout << "Created $" << getVolume() << endl;
}

Cube::~Cube()
{
    cout << "Destroyed $" << getVolume() << endl;
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

double cube_on_stack()
{
    Cube c(3);
    return c.getVolume();
}

void cube_on_heap()
{
    Cube *c1 = new Cube(10);
    Cube *c2 = new Cube;
    delete c1;
}

int main()
{

    cube_on_stack();
    cube_on_heap();
    cube_on_stack();

    return 0;
}