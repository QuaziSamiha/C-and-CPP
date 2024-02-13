#include<iostream>

using namespace std;

// width() function is a function of ostream class

int main()
{
    int array_1[4] = {1, 10, 100, 1000};
    int array_2[4] = {12, 231, 2, 13};

    cout.width(6); // here length is 6 and it will create 6 boxes
    cout<<"array_1";
    cout.width(6); // using for better output
    cout<<"\t array_2";
    cout<<endl;

    for(int i = 0; i < 4; i++)
    {
        cout.width(6); // we have to write width( ) function for each item
        cout<<array_1[i];
        cout.width(6);
        cout<<array_2[i];
        cout<<endl;
    }
    return 0;
}
