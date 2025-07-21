// entc b2, prn 24070123120

//find largest number among 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter the first number : ";
    cin>> num1;
    cout<<"\nenter the second number : ";
    cin>>num2;
    cout<<"\nenter the third number : ";
    cin>> num3;

    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"\n 1st number is greatest"<< num1;
        }
        else if(num3>num1)
        {
            cout<<"\n3rd number is greatest"<< num3;
        }
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
            cout<<"\n 2nd number is greatest"<< num2;
        }
        else
        {
            cout<<"\n3rd number is greatest"<< num3;
        }
    }
}

/* output of this code

Enter the first number : 23

enter the second number : 34

enter the third number : 45

3rd number is greatest45

*/
