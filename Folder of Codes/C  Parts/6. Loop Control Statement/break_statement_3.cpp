#include<iostream>

using namespace std;

int main()
{
    int i;

    cout<<"Enter 0 to exit"<<endl<<endl;
    while(1)
    {
        cout<<"Enter an integer : ";
        cin>>i;

        if(i == 0)
        {
            cout<<endl<<"Program Exit"<<endl;
            break;
        }

        cout<<"Entered : "<<i<<endl;
    }

    return 0;
}
