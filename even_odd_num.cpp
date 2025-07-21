//entc b2, prn 24070123120

#include<iostream>
using namespace std;
//program to find positive or negative number
int main()
{
    int num1;
    cout<<"enter the number : ";
    cin>>num1;

    if(num1<0)
    {
        cout<<"\n the number is negative ";
    }
    else if (num1>0)
    {
        cout<<"\n the number is positive";

    }
    else
    {
        cout<<"the number is zero";
    }
}

/* output of this code

enter the number : 14

 the number is positive

*/
