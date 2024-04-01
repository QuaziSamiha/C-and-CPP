// we can use logical operator to reduce statements in program
// update of previous code
#include<iostream>

using namespace std;

int main()
{
    char v;

    cout<<"Enter a latter : ";
    cin>>v;

    v = tolower(v); // use of library function

    if((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u'))
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
