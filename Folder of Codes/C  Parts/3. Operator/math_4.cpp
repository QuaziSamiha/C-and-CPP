// centigrade to Fahrenheit
#include<stdio.h>

int main()
{
    float C, F;

    printf("Enter Centigrade : ");
    scanf("%f", &C);

    F = (C * 1.8)+32;

    printf("\nFahrenheit : %.2f \n", F);
}

// (C/5) = (F-32)/9

/*
#include<iostream>

int main()
{
    double C, F;

    cout<<"Enter Centigrade : ";
    cin>>C;

    F = (C * 1.8)+32;

    cout<<endl<<"Fahrenheit : "<<F;
}
*/
