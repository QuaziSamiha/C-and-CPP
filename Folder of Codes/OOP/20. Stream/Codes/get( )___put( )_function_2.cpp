#include<iostream>

using namespace std;

int main()
{
    char variable;

    cout<<"Enter Characters or String : ";
    while(variable != '\n')
    {
        cin.get(variable); // it also reads space
        cout.put(variable);
    }

    return 0;
}
