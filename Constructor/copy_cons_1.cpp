#include <iostream>
using std::cout;
using std::endl;

class Cube
{
public:
    Cube();
    Cube(const Cube &obj);
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
};

Cube::Cube()
{
    length_ = 1;
    cout << "Default Constructor Invoked!!!" << endl;
}

Cube::Cube(const Cube &obj)
{
    length_ = obj.length_;
    cout << "Copy Constructor Invoked!!!" << endl;
}

void foo(Cube c)
{
    // Do Nothing :)
}

int main()
{
    Cube c;
    foo(c);

    return 0;
}

/* Output
Default Constructor Invoked!!!
Copy Constructor Invoked!!!
*/