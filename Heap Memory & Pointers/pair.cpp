#include <iostream>

class Pair
{
public:
    int first, second;
    void check()
    {
        first = 5;
        std::cout << "Congratulations! The check() method of the Pair class \n has executed." << std::endl;
    }
};

Pair *pairFactory()
{
    Pair *p = new Pair;
    return p;
}

int main()
{
    Pair *p;
    p = pairFactory();

    p->check(); // (*p).check(); will give the same output

    // Deallocating the heap memory. (Assuming it was made on the heap!)
    delete p;

    std::cout << "If you can see this text, the system hasn't crashed yet!" << std::endl;

    return 0;
}
