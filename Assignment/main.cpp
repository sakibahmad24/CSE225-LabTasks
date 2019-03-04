#include <iostream>
#include<math.h>
#include <cstdlib>

using namespace std;

int fibon(int n){

    if(n <= 1)
        return n;
    return fibon(n-1) + fibon(n-2);

}

int reverseNum(int toBeRev, int revNum)
{
    if(toBeRev==0)
        return revNum;
    revNum*=10;
    revNum+=toBeRev%10;

    return reverseNum(toBeRev/10, revNum);
}

int binToDec(int binaryNum)
{
    if(!(binaryNum/10))
        return (binaryNum);
    return (binaryNum % 10 + binToDec(binaryNum/10)*2);
}






int main()
{

    //code for finding fibonacci number starts
    int n;

    cout<<"The the value of n to get the fibonacci number"<<endl;
    cin >> n;

    cout<<"the nth fibonacci number is::"<<endl;
    cout<<fibon(n)<<endl;
    //code for finding fibonacci number ends


    //code for reversing a number starts

    int toBeRev;
    int revNum = 0;

    cout << "Enter a number to reverse it::"<<endl;

    cin >> toBeRev;

    cout<<"::The Reversed Number is::"<<endl;

    cout<<reverseNum(toBeRev, 0)<<endl;

    //code for reversing a number ends

    //code for bin to dec starts

    int binaryNum;

    cout<<"::Enter a binary number to convert::"<<endl;
    cin>>binaryNum;

    cout<<"::the converted decimal number is::"<<endl;
    cout<<binToDec(binaryNum)<<endl;

    //code for bin to dec ends

    return 0;

}
