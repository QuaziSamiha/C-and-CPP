#include <iostream> // (3:31pm,15 August,2020)
#define SIZE 4

using namespace std;

class class_name
{
    int array_name[SIZE]; // array within class
public:
    void function_1(void);
    void function_2(void);
};

void class_name::function_1(void)
{
    cout << "Enter " << SIZE << " integers as array elements : ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array_name[i];
    }
}

void class_name::function_2(void)
{
    cout << endl
         << "Array elements : " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "array_name[" << i + 1 << "] : " << array_name[i] << endl;
    }
}

int main()
{
    class_name object;

    object.function_1();
    object.function_2();
    return 0;
}
