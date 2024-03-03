// reading a file using fgetc()
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char variable;

    file_pointer = fopen("File_9.txt","r"); // r mode means read from a file

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        while(!feof(file_pointer)) // read until file is empty
        {
            variable = fgetc(file_pointer); // reading from file File_9
            printf("%c", variable); // printing in the console
        }

        fclose(file_pointer);
    }
}
