#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"



using namespace std;

int main()
{
    StackType <int> s;

    s.Push(10);
    s.Push(23);
    s.Push(269);

    s.PrintStack();
}
