// reading a file using fgets()
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char variable[40];

    file_pointer = fopen("File_9.txt","r"); // r mode means read from a file

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        while(!feof(file_pointer))
        {
            // fgets(variables-name, size, file-pointer-name)
            fgets(variable, 39, file_pointer); // reading from file File_9
            printf("%s \n", variable); // after reading printing it in console
        }

        fclose(file_pointer);
    }
}

