#include <iostream>

using namespace std;

int main()
{
    Complex a = Complex(5,2);
    Complex b = Complex(10,3);

    Complex c = Complex();

    c = a+b;

    c.Print();
}
