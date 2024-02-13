// passing structure variable to function
#include<iostream>
#include<string.h>

using namespace std;

struct structure
{
    int member_array[5]; // array within structure
    char member_1;
    float member_2;
    char member_string[20]; // string (character type array) within structure
};

void function_1(struct structure parameter) // user defined function
{
    for(int i = 0; i < 5; i++)
    {
        cout<<"member_array["<<i<<"] : "<<parameter.member_array[i]<<endl;
    }
    cout<<endl;
    cout<<"member_1 : "<<parameter.member_1<<endl;
    cout<<"member_2 : "<<parameter.member_2<<endl;
    cout<<"member_string : "<<parameter.member_string<<endl;
}

int main()
{
    struct structure variable;

    // initializing structure member through structure variable
    for(int i = 0; i < 5; i++)
    {
        variable.member_array[i] = i+11;
    }
    variable.member_1 = 'S';
    variable.member_2 = 2.45;
    strcpy(variable.member_string, "C Programming");

    function_1(variable); // calling user defined function and passing structure type variable
}
