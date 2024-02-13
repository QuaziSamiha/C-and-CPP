#include<stdio.h>   // adding something new with previous writing
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    FILE *file_pointer;

    char array_1[20] = "C programming";
    int length = strlen(array_1);

    file_pointer = fopen("File_3.txt","a"); // a mode means adding something with previously written things

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;
        for(int i = 0; i < length; i++)
        {
            fputc(array_1[i], file_pointer); // write one by one character in the file from character-array using fputc() function
        }
        printf("File is written successfully in File_3 \n");

        fclose(file_pointer);
    }
}

/*
In C programming, file is a place on disk where a group of related data is stored.
File is a structure which is stored in stdio.h header.
File operation :
1.creating a new file
2.opening an existing file
3.closing a file
4.reading from and writing information to a file
*/
