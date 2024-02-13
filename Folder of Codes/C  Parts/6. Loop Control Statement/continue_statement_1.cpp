// jump statement
// the continue statement skips the current iteration of a loop (for, while, do-while)
// it cannot use within switch statement
#include<iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            continue;
        }
        cout<<"C++ Programming -> "<<i<<endl;
    }
    cout<<endl<<"End of the loop"<<endl;
    cout<<"C Program"<<endl;
}
