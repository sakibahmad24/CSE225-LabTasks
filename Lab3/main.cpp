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


     int x = 50;
     bool y = true;
     ut.RetrieveItem(x, y);

     cout << y <<endl;

     ut.DeleteItem(10);
     ut.printlist();

}
