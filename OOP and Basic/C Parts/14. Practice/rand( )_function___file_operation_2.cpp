// creating random number
#include<iostream>
#include<fstream>
#include<stdlib.h> // for rand() function

using namespace std;

int main()
{
    int n;
    cout<<"Enter how many random number : ";
    cin>>n;

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
            int v = (rand()%10)+1;
            fprintf(f,"%d \n",v);
        }

        cout<<"File is written successfully"<<endl;
    }

    fclose(f);
    return 0;
}
