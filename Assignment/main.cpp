#include <iostream>
#include<math.h>
#include <cstdlib>
#include <cstring>

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

bool isPalRec(string check, int start, int end)
{
    if(start == end)
        return true;
    if(check[start] != check[end])
        return false;

    if(start<end+1)
        return isPalRec(check, start+1, end-1);
    return true;
}

bool isPalindrome(string check)
{
    int n = check.size();

    if(n==0)
        return true;
    return isPalRec(check, 0, n-1);
}

int product(int n1, int n2)
{
   if(n2 == 0)
      return 0;

   if(n2 > 0)
      return (n1 + product(n1, n2 - 1));

   if(n2 < 0)
      return -product(n1, -n2);
}

double seriesSum(int sumUpto)
{
    if(sumUpto==1)
    {
        return 1;
    }
    else
    {
        return 1.0/sumUpto + seriesSum(sumUpto-1);
    }

}

void reverseString(char *str)
{
   if (*str)
   {
       reverseString(str+1);
       cout<<*str;
   }
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

    //code for dec to bin starts

    int decNum;
    cout<<"::Enter decimal number:: "<<endl;
    cin>>decNum;
    cout<<"::The binary equivalent is:: "<<decToBin(decNum);
    cout<<""<<endl;
    //code for dec to bin ends

/*
    int decNum2=0;

    cout<<"::Enter a decimal number to convert into hex::"<<endl;
    cin>>decNum2;
    cout<<"::The converted number in hex is::"<<endl;
    decToHex(decNum2);
*/


    //palindrome code starts here

    string check;
    cout<<"::Enter a string to check whether it is palindrome or not::"<<endl;
    cin>>check;

    if(isPalindrome(check))
        cout<<"Yes!"<<endl;
    else
        cout<<"No!"<<endl;

    //palindrome ends here

    //multiplication starts here


    int x, y;

    cout<<"::Enter two integers::"<<endl;
    cin>>x>>y;

    cout<<""<<endl;

    cout<<"Product = "<< product(x, y) <<endl;

    //multiplication ends here

    //summation series starts

    int sumUpto;

    cout<<"::Enter a limit to get the summation upto::"<<endl;
    cin>>sumUpto;
    cout<<"The sum is:: "<<seriesSum(sumUpto)<<endl;

    char a[] = "Hello CSE225!";
    reverseString(a);

    //summation series ends


    return 0;


}
