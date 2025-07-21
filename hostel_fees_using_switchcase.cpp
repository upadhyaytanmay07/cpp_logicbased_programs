// entc b2, prn 24070123120

// program using switch case to tell details about hostel fees
#include<iostream>
using namespace std;
int main()
{
   cout<<"1. Hostel fee for 3 months\n 2. Hostel fee for 6 months\n 3. Hostel fee for 12 months\n 4. Additional charges for AC and Mess\n 5. Exit\n";

    int choice;
    cin >> choice;

    switch (choice) 
    {
        case 1:
        cout<<"The hostel fees for 3 months is Rs. 48,000 (exclusive of gst)\n";
        break;

        case 2:
        cout<<"The hostel fees for 6 months is Rs. 96,000 (exclusive of gst)\n";
        break;

        case 3:
        cout<<"The hostel fees for 12 months is Rs. 1,92,000 (exclusive of gst)\n";
        break;

        case 4:
        cout<<"The charges for AC is Rs. 2000 per month, and for Mess, charges are Rs. 5000 per month\n";
        break;

        case 5:
        cout<<"Exiting the program\n";
        break;
    }    
}


/* output for this code

1. Hostel fee for 3 months
 2. Hostel fee for 6 months
 3. Hostel fee for 12 months
 4. Additional charges for AC and Mess
 5. Exit
3
The hostel fees for 12 months is Rs. 1,92,000 (exclusive of gst)

*/  
