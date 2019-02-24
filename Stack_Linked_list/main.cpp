#include <iostream>
#include "stacktype.cpp"
#include "stacktype.h"

using namespace std;

int main()
{
    StackType <int> s;

    s.Push(10);
    s.Push(23);
    s.Push(269);
    s.Push(25);

    s.PrintStack();
}
