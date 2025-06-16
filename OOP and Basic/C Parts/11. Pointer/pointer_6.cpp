// access array element using pointer and increment operator
#include <iostream>

using namespace std;

int main()
{
    int array_1[] = {10, 20, 30, 40, 50};
    int *pointer_name;

    pointer_name = &array_1[0]; // pointer_name = &array_1; or int *pointer_name = &array_1[0]; or *pointer_name = &array_1[0];

    for (int i = 0; i < 5; i++)
    {
        cout << "array_1[" << i << "] : " << *pointer_name << endl;
        pointer_name++;
    }
}
