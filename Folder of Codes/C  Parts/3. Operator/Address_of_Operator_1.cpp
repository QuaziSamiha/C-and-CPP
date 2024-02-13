#include<iostream> // address of operator &

using namespace std;

int main()
{
    int v = 5;
    cout<<"v : "<<v<<endl;
    cout<<"&v : "<<&v<<endl;

    // value can be changed but memory location will remain same
    v = 12;
    cout<<"v : "<<v<<endl;
    cout<<"&v : "<<&v<<endl;
}
