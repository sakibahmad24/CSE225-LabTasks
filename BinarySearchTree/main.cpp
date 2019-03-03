#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> tr;

        tr.InsertItem(10);
        tr.InsertItem(111);
        tr.InsertItem(2);
        tr.InsertItem(23);
        tr.InsertItem(4);


    if(!tr.IsEmpty()){
        cout<<"Tree is not empty"<<endl;
    }

    tr.Print();
}
