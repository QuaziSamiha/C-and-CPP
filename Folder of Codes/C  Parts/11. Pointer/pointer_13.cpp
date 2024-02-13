// pointer type array or array of pointer
#include<iostream>

using namespace std;

int main()
{
    int array_1[] = {22,55,77,99};
    int *array_pointer[4];

    for(int i = 0; i < 4; i++)
    {
        array_pointer[i] = &array_1[i];
        cout<<"Address : "<< array_pointer[i] <<"\t\tValue : "<< *array_pointer[i] <<endl;
    }
}
