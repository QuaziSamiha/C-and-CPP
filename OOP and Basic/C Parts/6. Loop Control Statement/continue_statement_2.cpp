#include<iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 20; i++)
    {
        if(i == 13)
        {
            cout<<endl<<endl<<"continue statement"<<endl<<endl;
            continue;
        }

        cout<<"C++ Programming -> "<<i<<endl;
    }

    cout<<endl<<"Outside of the loop"<<endl;
}
