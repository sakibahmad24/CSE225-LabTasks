#include <iostream>
#include "complex.h"
#include "complex.cpp"

using namespace std;

int main()
{
    Complex a = Complex(5,2);
    Complex b = Complex(10,3);

    Complex c = Complex();

    c = a+b;

    a.Print();
    b.Print();
    c.Print();


}
