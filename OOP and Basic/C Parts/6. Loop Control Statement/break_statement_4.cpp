#include<iostream>

using namespace std;

int main()
{
    for(int i = 10; i < 20; i++)
    {
        cout<<"C Program -> "<<i<<"    ";
        if(i == 15)
        {
            cout<<endl<<endl<<"break statement"<<endl;
            break;
        }
        cout<<"C++ Program -> "<<i<<endl;
    }

    cout<<endl<<"Out of the loop"<<endl;
}
