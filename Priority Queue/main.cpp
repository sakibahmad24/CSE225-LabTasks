#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType <int> PQ(5);
    PQ.Enqueue(5);
    PQ.Enqueue(6);
    PQ.Enqueue(2);
    PQ.Enqueue(4);
    PQ.Enqueue(1);
    PQ.Print();
    return 0;
}
