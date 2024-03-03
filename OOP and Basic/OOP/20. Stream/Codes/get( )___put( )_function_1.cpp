#include<iostream>

using namespace std;

int main()
{
    char variable;

    cout<<"Enter a character : ";
    cin.get(variable); // get function reads character by character
    // get is a function of istream class so we use cin object to access it

    cout<<"You entered : ";
    cout.put(variable); // put function print character by character
    // put is a function of ostream class so we use cout object to access it

    return 0;
}
