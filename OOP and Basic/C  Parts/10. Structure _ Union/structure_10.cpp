// array within structure and array of structure
#include<iostream>

using namespace std;

struct structure
{
    int member_array[5]; // array within structure
    char member_1;
    float member_2;
    char member_string[20]; // string (character type array) within structure
};

int main()
{
    struct structure variable_array[3]; // array of structure

    // initializing structure member through structure variable taking input
    cout<<"Enter information for array of structure : "<<endl;
    for(int j = 0; j < 3; j++)
    {
        cout<<endl<<"Enter 5 integer for array within structure : ";
        for(int i = 0; i < 5; i++)
        {
            cin>>variable_array[j].member_array[i];
        }
        cout<<"Enter a character : ";
        cin>>variable_array[j].member_1;
        cout<<"Enter a float : ";
        cin>>variable_array[j].member_2;
        cout<<"Enter a string : ";
        cin>>variable_array[j].member_string;
    }

    for(int j = 0; j < 3; j++)
    {
        cout<<endl;
        for(int i = 0; i < 5; i++)
        {
            cout<<"variable_array["<<j<<"].member_array["<<i<<"] : "<<variable_array[j].member_array[i]<<endl;
        }
        cout<<"variable_array["<<j<<"].member_1 : "<<variable_array[j].member_1<<endl;
        cout<<"variable_array["<<j<<"].member_2 : "<<variable_array[j].member_2<<endl;
        cout<<"variable_array["<<j<<"].member_string : "<<variable_array[j].member_string<<endl;
    }
}
