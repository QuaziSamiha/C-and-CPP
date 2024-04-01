// jump statement
#include<iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 20; i++)
    {
        if(i == 10)
        {
            break;   // loop terminate (it will terminate full loop body)
        }
        cout<<"C++ Programming -> "<<i<<endl;
        if(i%3 == 0)
        {
            continue;   // bypass (when the condition is true,it will skip full loop body)
        }
        cout<<i<<endl;
    }
    cout<<endl<<endl<<"End of the loop"<<endl;
}

