// we can use logical operator to reduce statements in program
#include<iostream>

using namespace std;

int main()
{
    char v;

    cout<<"Enter a latter : ";
    cin>>v;

    if((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u') || (v == 'A') || (v == 'E') || (v == 'I') || (v == 'O') || (v == 'U'))
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else
    {
        cout<<endl<<"Consonant"<<endl;
    }
}
/*

int main()
{
    char v;

    cout<<"Enter a lower case latter : ";
    cin>>v;

    if(v == 'a')
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else if(v == 'e')
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else if(v == 'i')
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else if(v == 'o')
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else if(v == 'u')
    {
        cout<<endl<<"Vowel"<<endl;
    }
    else
    {
        cout<<endl<<"Consonant"<<endl;
    }
}

*/
