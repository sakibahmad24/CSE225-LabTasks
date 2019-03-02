#include <iostream>

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





    return 0;

}
