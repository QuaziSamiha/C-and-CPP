#include<iostream>
#include<stdio.h> // for gets function

using namespace std;

int main()
{
    char string_name[20];

    cout<<"Enter a string : ";
    gets(string_name); // can take input after space

    cout<<endl<<string_name<<endl;

}

