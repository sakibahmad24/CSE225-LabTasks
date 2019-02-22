#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"


using namespace std;

int main()
{
    SortedType <int> st;

    st.InsertItem(12);
    st.InsertItem(10);
    st.InsertItem(36);
    st.InsertItem(15);

    st.printList();

}
