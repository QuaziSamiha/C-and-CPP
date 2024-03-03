// writing to file using fprintf()
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char array_1[100];
    int variable;

    file_pointer = fopen("File_8.txt", "a");

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        printf("Enter your name : ");
        gets(array_1);
        cout<<endl<<"Enter your age : ";
        cin>>variable;

        fprintf(file_pointer, "Name = %s, Age = %d \n", array_1, variable);  // file_pointer_name, format-specifier, variables-name
        cout<<endl<<"File is written successfully"<<endl;

        fclose(file_pointer);
    }
}
