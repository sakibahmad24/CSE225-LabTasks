#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType <int> st;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);
    st.PrintList();

    st.DeleteItem(7);
    st.PrintList();
    st.MakeEmpty();
    st.PrintList();
    return 0;

}
