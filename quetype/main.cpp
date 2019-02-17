#include <iostream>
#include "quetype.h"
#include "quetype.cpp"


using namespace std;

int main()
{
    QueType <int> qt;

    qt.Enqueue(10);
    qt.Enqueue(1);
    qt.Enqueue(156);
    qt.Enqueue(2);

    qt.Print();




    return 0;
}
