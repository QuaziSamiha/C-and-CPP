// 2D array
// taking row & column no. and elements as input from user of an two dimensional array
#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout<<"Enter how many rows : ";
    cin>>n1;
    cout<<"Enter how many columns : ";
    cin>>n2;

    int array_name[n1][n2];

    cout<<endl<<"Enter "<<n1*n2<<" elements for two dimensional array"<<endl;
    for(int r = 0; r < n1; r++)
    {
        for(int c = 0; c < n2; c++)
        {
            cout<<"array["<<r<<"]["<<c<<"] : ";
            cin>>array_name[r][c];
        }
    }

    cout<<endl<<"    Two Dimensional Array : "<<endl<<endl;
    for(int r = 0; r < n1; r++)
    {
        cout<<"    ";
        for(int c = 0; c < n2; c++)
        {
            cout<<array_name[r][c]<<"  ";
        }
        cout<<endl;
    }
}

