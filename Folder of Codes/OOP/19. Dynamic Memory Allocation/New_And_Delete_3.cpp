#include<iostream>

using namespace std;

// Dynamic Memory Allocation of 2D Array
// Adding Two Matrix

int main()
{
    int row, column;

    cout<<"Enter row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>column;

    int **pointer_name_1 = new int* [row]; // Dynamic memory allocation
    for(int i = 0; i < row; i++)
    {
        pointer_name_1[i] = new int [column];
    }

    cout<<"Enter elements for 2D array of "<<row<<"row and "<<column<<"column : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>pointer_name_1[i][j];
        }
    }

    int **pointer_name_2 = new int* [row]; // allocating memory dynamically
    for(int i = 0; i < row; i++)
    {
        pointer_name_2[i] = new int[column];
    }

    cout<<"Enter elements for 2D array of "<<row<<"row and "<<column<<"column : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>pointer_name_2[i][j];
        }
    }

    cout<<endl<<"1st Matrix : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<pointer_name_1[i][j]<<'\t';
        }
        cout<<endl;
    }

    cout<<endl<<"2nd Matrix : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<pointer_name_2[i][j]<<'\t';
        }
        cout<<endl;
    }

    int **pointer_name_3 = new int* [row]; // allocating memory dynamically
    for(int i = 0; i < row; i++)
    {
        pointer_name_3[i] = new int[column];
    }

    for(int i = 0; i < row; i++) // adding two matrix
    {
        for(int j = 0; j < column; j++)
        {
            pointer_name_3[i][j] = pointer_name_1[i][j]+pointer_name_2[i][j];
        }
    }

    cout<<endl<<"Sum of Matrix : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<pointer_name_3[i][j]<<'\t';
        }
        cout<<endl;
    }

    for(int i = 0; i < row; i++) // free memory
    {
        delete [] pointer_name_1 [i];
    }
    delete [] pointer_name_1;

    for(int i = 0; i < row; i++) // free memory
    {
        delete [] pointer_name_2 [i];
    }
    delete [] pointer_name_2;

    for(int i = 0; i < row; i++) // free memory
    {
        delete [] pointer_name_3 [i];
    }
    delete [] pointer_name_3;

    return 0;
}
