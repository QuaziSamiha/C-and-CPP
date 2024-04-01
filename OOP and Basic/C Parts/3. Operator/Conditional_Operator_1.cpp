#include<iostream>  // conditional or ternary operator (? : )

using namespace std;

int main()
{
    int v1, v2;

    cout<<"Enter an integer : ";
    cin>>v1;

    v2 = (v1 < 20)? 9 : 10;
    cout<<"v2 : "<<v2<<endl;
}
