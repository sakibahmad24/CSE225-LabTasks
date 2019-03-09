#include <iostream>

using namespace std;

fib(int nth){

    if(nth<=1){
        return nth;
    }
    else if(nth==2){
        return 1;
    }
    else{
        return fib(nth - 1) + fib (nth-2);
    }

}

int decimalToBinary(int convertingDecimal)
{
    if (convertingDecimal==0)
        return 0;
    else{
         return(convertingDecimal%2+10 * decimalToBinary(convertingDecimal/2));
    }

}

int main()
{
    int nth;

     cout<<"Enter an number to finds it's fibonacci number:: ";
     cin>>nth;

     cout<<"the number is:: "<<fib(nth)<<endl;

     int convertingDecimal;
     cout<<"Enter a decimal number to convert it into equivalent binary::"<<endl;
     cin>>convertingDecimal;

     cout<<"The converted decimal to binary is:: "<<decimalToBinary(convertingDecimal)<<endl;


}
