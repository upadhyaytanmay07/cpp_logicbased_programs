// entc b2, prn 24070123120

// check if char is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"\nthe char is a vowel";
    }
    else
    {
        cout<<"\nthe character is a consonant";
    }
}

/* output of this code

enter the character : V

the character is a consonant

*/
