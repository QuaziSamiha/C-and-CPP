// storing students details
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    FILE *f;
    char name[40];
    int age, phone_number, number;

    f = fopen("practice_1.txt", "a");

    if(f == NULL)
    {
        cout<<"File doesn't exist"<<endl;
    }
    else
    {
        cout<<"File is opened"<<endl;

        printf("Enter number of students : ");
        scanf("%d", &number);
        for(int i = 1; i <= number; i++)
        {
            // taking input from user
            cout<<"Enter student name : ";
            cin>>name;
            cout<<"Enter student age : ";
            cin>>age;
            cout<<"Enter student phone_number : ";
            cin>>phone_number;

            // writing in file
            fprintf(f, "\n%s\t\t%d\t%d", name, age, phone_number);
        }
        fclose(f);
    }

    return 0;
}
