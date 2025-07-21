// entc b2, prn 24070123120

// calculator using switch case
#include<iostream>
using namespace std;
int main()
{
    int choice;
    int num1, num2;
    int sum, product, difference, division;

   cout<<"\n 1. sum\n 2. difference\n 3. multiplication\n 4.division\n";

    cout<<"\n enter your choice : ";
    cin>> choice;

    
    switch(choice)
    {

        case 1:
        cout<<"enter 1st number : ";
        cin>>num1;
        cout<<"\n enter 2nd number : ";
        cin>> num2;
        sum=num1+num2;
        cout<<"\n the sum is : "<<sum;
        break; 

        case 2:
        cout<<"enter 1st number : ";
        cin>>num1;
        cout<<"\n enter 2nd number : ";
        cin>> num2;
        difference=num1-num2;
        cout<<"\n the difference is : "<<difference;
        break;

        case 3:
        cout<<"enter 1st number : ";
        cin>>num1;
        cout<<"\n enter 2nd number : ";
        cin>> num2;
        product=num1*num2;
        cout<<"\n the product is : "<<product;
        break;

        case 4:
        cout<<"enter 1st number : ";
        cin>>num1;
        cout<<"\n enter 2nd number : ";
        cin>> num2;
        if(num2!=0)
        {
            division=num1/num2;
            cout<<"\n the division is : "<<division;
        }
        else 
        {
            cout<<" invalid input \nnum2 should be greater than 0 \n";
        }
        break;

        default:
        cout<<"invalid input";
        break;
    }
}


/* output for this code

1. sum
 2. difference
 3. multiplication
 4.division

 enter your choice : 3
enter 1st number : 25

 enter 2nd number : 4

 the product is : 100

  */
