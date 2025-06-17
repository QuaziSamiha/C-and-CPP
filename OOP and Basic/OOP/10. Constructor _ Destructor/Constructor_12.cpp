// Constructor Overloading
//? (11:33pm,10 May,2020 & 11:23pm,16 August,2020)
//? February, March, August, September, 2024
//? 17 June, 2025

#include <iostream>

using namespace std;

class class_name
{
    int data_member_1, data_member_2;

public:
    class_name();
    class_name(int);
    class_name(int, int);

    void member_function(void);
};

class_name::class_name()
{
    data_member_1 = 10;
    data_member_2 = 12;
}

class_name::class_name(int parameter)
{
    data_member_1 = data_member_2 = parameter;
}

class_name::class_name(int parameter_1, int parameter_2)
{
    data_member_1 = parameter_1;
    data_member_2 = parameter_2;
}

void class_name::member_function(void)
{
    cout << "data_member_1 : " << data_member_1 << endl;
    cout << "data_member_2 : " << data_member_2 << endl;
}

int main()
{
    class_name object_one;
    class_name object_two(15);
    class_name object_three(34, 87);

    cout << "Default  " << endl;
    object_one.member_function();
    cout << endl
         << "One Argument  " << endl;
    object_two.member_function();
    cout << endl
         << "Two Argument  " << endl;
    object_three.member_function();
    return 0;
}
