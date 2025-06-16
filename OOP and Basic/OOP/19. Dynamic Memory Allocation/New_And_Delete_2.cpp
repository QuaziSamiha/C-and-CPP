#include <iostream>

using namespace std;

// Dynamic Memory Allocation in One D Array

int main()
{
    int *pointer, total = 0, number;

    cout << "Enter how many elements : ";
    cin >> number;

    pointer = new int[number]; // dynamically allocating memory

    cout << endl
         << "Enter elements : ";
    for (int i = 0; i < number; i++)
    {
        cin >> pointer[i];
    }

    cout << endl
         << "Elements are : ";
    for (int i = 0; i < number; i++)
    {
        cout << "\t " << *(pointer + i); // pointer[i]
        total = total + pointer[i];
    }

    cout << endl
         << "Total : " << total << endl;
}
