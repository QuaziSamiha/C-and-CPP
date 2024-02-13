#include<iostream>

using namespace std;

// Array of Pointer

int main()
{
    int array_1[] = {18,23,54,22};
    int *pointer_array[3]; // array of pointer

    cout<<"Address  \t\t\t  Value "<<endl;
    for(int i = 0; i < 4; i++)
    {
        pointer_array[i] = &array_1[i];

        cout<<"pointer_array["<<i<<"] : "<< pointer_array[i]<<"\t *pointer_array["<<i<<"] : "<< *pointer_array[i]<<endl;
    }

    return 0;
}
