// adding numbers using pointer
#include <iostream>

using namespace std;

int main()
{
    int variable_1 = 23, variable_2 = 70;
    int *pointer_name_1, *pointer_name_2;

    pointer_name_1 = &variable_1;
    pointer_name_2 = &variable_2;

    int variable_3 = *pointer_name_1 + *pointer_name_2;

    cout << "sum : " << variable_3 << endl;
}
