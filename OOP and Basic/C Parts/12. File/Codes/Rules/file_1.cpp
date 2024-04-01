// how to create and open a file
#include<stdio.h> // using for fopen() and fclose() function
#include<iostream> // using for cout object

using namespace std;

int main()
{
    FILE *file_pointer;
    file_pointer = fopen("File_1.txt","w"); // w means open and write mode
    // .txt is extension of notepad and .doc is extension of microsoft word

    if(file_pointer == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;
    }

    fclose(file_pointer);
    return 0;
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
