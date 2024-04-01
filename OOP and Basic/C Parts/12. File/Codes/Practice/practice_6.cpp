#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    FILE *f; // declaring file pointer

    char a[20]; // character type array
    cout<<"Enter your name : ";
    gets(a); // taking input from user

    f = fopen("file.txt","w"); // creating a file
    if(f == NULL)
    {
        cout<<"Sorry"<<endl; // a message for printing in console
    }
    else
    {
        cout<<"File is opened"<<endl; // a message for printing in console

        fputs(a,f); // writing a string in the file

        cout<<"File is written successfully"<<endl; // a message for printing in console
    }

    fclose(f);
}
