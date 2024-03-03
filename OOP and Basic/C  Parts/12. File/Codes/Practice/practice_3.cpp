#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    FILE *f; // declaring a file pointer
    f = fopen("file.txt","w"); // creating a file

    int a[5] = {1,2,3,4,5}; // declaring and initializing an array

    if(f == NULL)
    {
      cout<<"Sorry"<<endl;
    }
    else
    {
        cout<<"Welcome"<<endl; // a message for printing in console

        fprintf(f,"Array elements : "); // a message for writing in the file
        for(int i = 0; i < 5; i++) // a loop for writing array elements in the file
        {
            fprintf(f,"%d \t", a[i]);
        }

        cout<<"Done"<<endl; // a message for printing in console
    }

    fclose(f);
    return 0;
}
