#include<iostream>

using namespace std;

int main()
{
    int array_1[4] = {1, 10, 100, 1000};

    cout<<"Using width() function : "<<endl;
    cout.width(4);
    cout<<array_1[0]<<endl;
    cout.width(4);
    cout<<array_1[1]<<endl;
    cout.width(4);
    cout<<array_1[3]<<endl;


    cout<<endl<<"Without using width() function : "<<endl;
    cout<<array_1[0]<<endl;
    cout<<array_1[1]<<endl;
    cout<<array_1[3]<<endl;

    return 0;
}
