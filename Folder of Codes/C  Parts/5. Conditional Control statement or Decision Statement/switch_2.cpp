// a program to find out a latter vowel or consonant using switch statement
#include<iostream>

using namespace std;

int main()
{
    char v;

    cout<<"Enter a character : ";
    cin>>v;

    switch(v) // working with multiple case
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<endl<<"Vowel"<<endl;
        break;
    default :
        cout<<endl<<"Consonant"<<endl;
    }
}
