#include<iostream>
//#include<fstream>
#include<stdio.h>

using namespace std;

int main()
{
    FILE *f;

    f = fopen("file.doc","w");

    if(f == NULL)
    {
        cout<<"Sorry";
    }
    else
    {
        cout<<"Thanks";
    }
}
