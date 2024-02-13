// writing to a file using fputs and adding new string in append mode in file_7
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char array_1[100];

    printf("Enter your name : ");
    gets(array_1);

    file_pointer = fopen("File_6.txt", "w");

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        fputs(array_1, file_pointer);

        cout<<endl<<"File is written successfully"<<endl;

        fclose(file_pointer);
    }
}
