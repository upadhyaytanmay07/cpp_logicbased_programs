// entc b2, prn 24070123120

//  switch case use 
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday\n";
    cin>> choice;
    
    switch (choice)
    {
        case 1:
        cout<<"Monday";
        break;
    
    
        case 2:
        cout<<" Tuesday";
        break;
    
    
        case 3:
        cout<<"Wednesday";
        break;
    
    
        case 4:
        cout<<"Thursday";
        break;
    
    
        case 5:
        cout<<"Friday";
        break;
    
    
        case 6:
        cout<<"Saturday";
        break;

    
    
        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid choice";
        break;
    }
    return 0;
}

/* output for this code

1. Monday
 2. Tuesday
 3. Wednesday
 4. Thursday
 5. Friday
 6. Saturday
 7. Sunday
2
 Tuesday

*/
