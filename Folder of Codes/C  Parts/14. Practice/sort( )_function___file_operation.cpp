// taking input from user for an array and display the array before & after sorting in a file
#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

FILE *f; // declaring file pointer
void show(int[], int); // a user defined function for displaying array

int main()
{
    int n;
    cout<<"Enter how elements : ";
    cin>>n;

    int a[n]; // declaring array
    cout<<"Enter array elements : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] : ";
        cin>>a[i];
    }

    f = fopen("file.txt", "w"); // creating a file
    if(f == NULL)
    {
        cout<<"Sorry"<<endl;
    }
    else
    {
        cout<<endl<<"File is successfully written by you !!!"<<endl;

        fprintf(f,"Before Sorting : ");
        show(a,n);

        sort(a, a+n); // using a built-in function for sort the array

        fprintf(f,"After sorting  : ");
        show(a,n);

        cout<<"Done"<<endl;
    }

    fclose(f);
    return 0;
}

void show(int arr[], int n) // defining user defined function
{
    for(int i = 0; i < n; i++)
    {
        fprintf(f,"%d   ", arr[i]);
    }
    fprintf(f,"\n\n");
}
