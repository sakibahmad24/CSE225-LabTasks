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

int decToBin(int decNum)
{
    if (decNum==0)
        return 0;
    else
       {
         return
            (decNum%2 + 10 * decToBin(decNum/2));
       }
}

/*void decToHex(int decNum2){
    int hex=0;
    if(!decNum2)
        return;
    else {
        hex=decNum2%16;
        decToHex(decNum2/16);
    }
    if(hex>9)
        cout<<"A"<< hex-10 <<endl;
    else
        cout<<hex<<endl;
    }

*/




int main()
{

    //code for finding fibonacci number starts
    /*



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

    //code for dec to bin starts

    int decNum;
    cout<<"::Enter decimal number:: "<<endl;
    cin>>decNum;
    cout<<"::The binary equivalent is:: "<<decToBin(decNum);
    cout<<""<<endl;
    //code for dec to bin ends

    */

    int decNum2=0;

    cout<<"::Enter a decimal number to convert into hex::"<<endl;
    cin>>decNum2;
    cout<<"::The converted number in hex is::"<<endl;
    decToHex(decNum2);



    return 0;

}
