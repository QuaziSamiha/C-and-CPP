// addition of two matrix
#include<iostream>

using namespace std;

int main()
{
    int array_A[10][10], array_B[10][10], array_C[10][10], row, column;

    cout<<"Enter how many rows : ";
    cin>>row;
    cout<<"Enter how many columns : ";
    cin>>column;

    cout<<"Enter "<<row*column<<" elements for matrix A : ";
    for(int r = 0; r < row; r++) // for taking input of matrix A
    {
        for(int c = 0; c < column; c++)
        {
            cin>>array_A[r][c];
        }
    }
    cout<<"Enter "<<row*column<<" elements for matrix B : ";
    for(int r = 0; r < row; r++) // for taking input of matrix A
    {
        for(int c = 0; c < column; c++)
        {
            cin>>array_B[r][c];
        }
    }

    cout<<endl<<"Matrix A : "<<endl;
    for(int r = 0; r < row; r++) // for displaying matrix A
    {
        for(int c = 0; c < column; c++)
        {
            cout<<array_A[r][c]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix B : "<<endl;
    for(int r = 0; r < row; r++) // for displaying matrix B
    {
        for(int c = 0; c < column; c++)
        {
            cout<<array_B[r][c]<<"  ";
        }
        cout<<endl;
    }

    for(int r = 0; r < row; r++) // adding two matrix
    {
        for(int c = 0; c < column; c++)
        {
            array_C[r][c] = array_A[r][c]+array_B[r][c];
        }
    }

    cout<<endl<<"Addition of Matrix A and Matrix B : "<<endl;
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < column; c++)
        {
            cout<<array_C[r][c]<<"  ";
        }
        cout<<endl;
    }
}

