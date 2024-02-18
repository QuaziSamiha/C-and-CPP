#include<iostream>  // (9:33pm,10 May,2020 & 10:50pm,16 August,2020)

using namespace std;

// parameterized constructor

class class_name
{
public :
    class_name(int, int); // declaring parameterized constructor
};

class_name::class_name(int parameter_1, int parameter_2) // defining parameterized constructor
{
    cout<<" parameter_1 : "<<parameter_1<<endl;
    cout<<" parameter_2 : "<<parameter_2<<endl;
}

int main()
{
   // class_name object_2; it will show an error since the class ha no default constructor

    class_name object_1 = class_name(12,15); // calling constructor explicitly
    return 0;
}

