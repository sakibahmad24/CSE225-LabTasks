#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType <int> ut;
     ut.InsertItem(10);
     ut.InsertItem(6);
     ut.InsertItem(50);

     ut.printlist();

     ut.DeleteItem(10);
     ut.RetrieveItem(50);

     ut.printlist();

}
