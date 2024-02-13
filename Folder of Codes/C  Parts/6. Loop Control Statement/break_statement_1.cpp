// jump statement
// break statement is used to break loop or switch statement
// in case of inner loop, it breaks only inner loop
#include<iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 7)
        {
            cout<<endl<<"Program Exit"<<endl;
            break;
        }
        cout<<"C++ Programming -> "<<i<<endl;
    }

    cout<<endl<<"End of the loop"<<endl;
    cout<<"C Program"<<endl;

    return 0;
}
