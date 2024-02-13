#include<iostream> // (9:55 am,15 August,2020)

using namespace std;

class class_name
{
    int v1,v2;
public :
    void function_1();
    void function_2();
};

inline void class_name::function_1()
{
    cout<<"Enter two integers : ";
    cin>>v1>>v2;
}

inline void class_name::function_2()
{
    cout<<endl<<"maximum value : "<<(v1>v2? v1:v2)<<endl;
}

int main()
{
    class_name object;

    object.function_1();
    object.function_2();

    return 0;
}
