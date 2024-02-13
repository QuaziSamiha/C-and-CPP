// multiplication of two matrix
#include<iostream>

using namespace std;

int main()
{
    int array_A[10][10], array_B[10][10], array_C[10][10], row_1, row_2, column_1, column_2, sum = 0;

    cout<<"Enter how many rows and columns for matrix A : ";
    cin>>row_1>>column_1;
    cout<<"Enter how many rows and columns for matrix B : ";
    cin>>row_2>>column_2;

    while(column_1 != row_2)
    {
        cout<<"Column no of matrix A and row no of matrix B has to be equal !!! \n"<<endl;

        cout<<"Enter how many rows and columns for matrix A : ";
        cin>>row_1>>column_1;
        cout<<"Enter how many rows and columns for matrix B : ";
        cin>>row_2>>column_2;
    }

    cout<<"Enter "<<row_1*column_1<<" elements for matrix A : ";
    for(int r = 0; r < row_1; r++) // for taking input of matrix A
    {
        for(int c = 0; c < column_1; c++)
        {
            cin>>array_A[r][c];
        }
    }
    cout<<"Enter "<<row_2*column_2<<" elements for matrix B : ";
    for(int r = 0; r < row_2; r++) // for taking input of matrix A
    {
        for(int c = 0; c < column_2; c++)
        {
            cin>>array_B[r][c];
        }
    }

    cout<<endl<<"Matrix A : "<<endl;
    for(int r = 0; r < row_1; r++) // for displaying matrix A
    {
        for(int c = 0; c < column_1; c++)
        {
            cout<<array_A[r][c]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix B : "<<endl;
    for(int r = 0; r < row_2; r++) // for displaying matrix B
    {
        for(int c = 0; c < column_2; c++)
        {
            cout<<array_B[r][c]<<"  ";
        }
        cout<<endl;
    }

    for(int r = 0; r < row_1; r++) // multiplying two matrix
    {
        for(int c = 0; c < column_2; c++)
        {
            for(int k = 0; k < column_1; k++)
            {
                sum = sum + array_A[r][k] * array_B[k][c];

            }
            array_C[r][c] = sum;
            sum = 0;
        }
    }

    cout<<endl<<"Multiplication of Matrix A and Matrix B : "<<endl;
    for(int r = 0; r < row_1; r++) // for displaying matrix B
    {
        for(int c = 0; c < column_2; c++)
        {
            cout<<array_C[r][c]<<"  ";
        }
        cout<<endl;
    }
}
