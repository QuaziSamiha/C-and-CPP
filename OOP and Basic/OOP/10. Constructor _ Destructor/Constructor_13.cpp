// pointer and selection operator
//? (7:52am,17 August,2020)
//? February, March, August, September, 2024
//? 17 June, 2025
#include <iostream>

using namespace std;

class class_name
{
    int m1;
    double m2;

public:
    class_name();
    class_name(int p1, double p2);
    void function_1(void);
    ~class_name();
};

class_name::class_name()
{
    cout << "default constructor " << endl;
}

class_name::class_name(int p1, double p2)
{
    m1 = p1;
    m2 = p2;
}

void class_name::function_1(void)
{
    cout << "m1 : " << m1 << endl;
    cout << "m2 : " << m2 << endl;
}

int main()
{
    class_name object_1;
    class_name object_2(12, 578.33);

    class_name *pointer = &object_2;
    pointer->function_1(); // -> is selection operator
    return 0;
}
