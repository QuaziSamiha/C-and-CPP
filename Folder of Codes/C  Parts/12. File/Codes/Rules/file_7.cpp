#include<stdio.h>  // adding to a file using fputs
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char array_1[100];

    file_pointer = fopen("File_6.txt", "a");

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        printf("Add something with your name : ");
        gets(array_1);

        fputs(" ", file_pointer); // space in file
        fputs(array_1, file_pointer);
        cout<<endl<<"File is written successfully"<<endl;

        fclose(file_pointer);
    }
}
