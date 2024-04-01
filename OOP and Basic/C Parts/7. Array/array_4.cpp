// 2D array
// declaring and initializing two dimensional array or matrix array
#include<iostream>
using namespace std;

int main()
{
    // int array_name[3][4] // declaring 2D array

    int array_name[3][4] = {{1,2,3,4},{4,3,2,1},{5,6,7,8}};
    // declaring and initializing together

    cout<<"Two Dimensional Array : \n"<<endl;
    // number of elements = row x column
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 4; column++)
        {
            cout<<array_name[row][column]<<"  ";
        }
        cout<<endl;
    }
}
