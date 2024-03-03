#include<iostream> // (4:01pm,15 August,2020)
#define SIZE 4

using namespace std;

class class_name
{
    int m;
    char a[20]; // character type array within class
public :
    void function_1(void);
    void function_2(void);
};

void class_name::function_1(void)
{
    cout << "Enter a string : ";
    cin >> a;
    cout << "Enter an integer : ";
    cin >> m;
}

void class_name::function_2(void)
{
    cout << "string  : " << a << endl;
    cout << "integer : " << m << endl;
}

int main()
{
    class_name object[SIZE]; // array of object

    cout << "Enter data : " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        object[i].function_1();
    }

    cout << endl << "Entered Data : " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        object[i].function_2();
    }
    return 0;
}
