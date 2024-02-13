// writing to a file using fputs
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char array_1[20];

    file_pointer = fopen("File_5.txt", "w");

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        printf("Enter your name : ");
        gets(array_1);

        fputs(array_1, file_pointer);

        cout<<endl<<"File is written successfully"<<endl;
    }

    fclose(file_pointer);
    return 0;
}
