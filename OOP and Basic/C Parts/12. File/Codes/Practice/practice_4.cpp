// taking input from user for an array and writing the array in a file
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter how many elements : ";
    cin>>n;

    int a[n]; // declaring array
    FILE *f; // declaring file pointer

    f = fopen("practice_3.txt","w"); // creating a file
    if(f == NULL)
    {
        cout<<"Sorry !!!"<<endl;
    }
    else
    {
        cout<<"Welcome"<<endl<<endl; // a message for printing in console to confirm that file is created successfully

        cout<<"Enter "<<n<<" elements for the array : "<<endl; // a message for printing in console

        fprintf(f,"Array elements : \n"); // a message for writing in the file

        for(int i = 0; i < n; i++)
        {
            cout<<"a["<<i<<"] : "; // taking array elements as input from user
            cin>>a[i];

            fprintf(f,"a[%d] : %d \n", i,a[i]); // writing the array elements in a file
        }

        cout<<"Done"<<endl; // a message for printing in console
    }

    fclose(f);
    return 0;
}

