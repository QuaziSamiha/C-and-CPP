// creating random number
#include<iostream>
#include<fstream>
#include<stdlib.h> // for rand() function
#include<algorithm> // for sort() function

using namespace std;

int main()
{
    int n;
    cout<<"Enter how many random number : ";
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = (rand()%100)+1; // n random numbers will be stored in an array between a range from 1 to 100
    }

    sort(a,a+n); // sorting random numbers in increasing order

    FILE *f;

    f = fopen("file.txt","w");
    if(f == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        for(int i = 0; i < n; i++)
        {
            fprintf(f,"%d \n",a[i]); // writing sorted array in the file
        }

        cout<<"File is written successfully"<<endl;
    }

    fclose(f);
    return 0;
}
