// reading a file using fscanf
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *file_pointer;
    char array_1[40], array_2[40];
    int variable;

    file_pointer = fopen("File_11.txt","r"); // r mode means read from a file

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        fscanf(file_pointer, "%s %s %d", &array_1, &array_2, &variable);
        printf("%s %s %d \n", array_1, array_2, variable);

        fclose(file_pointer);
    }
}


