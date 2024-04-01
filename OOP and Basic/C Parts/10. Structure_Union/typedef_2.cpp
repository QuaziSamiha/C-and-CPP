#include<iostream>

using namespace std;

struct structure
{
    char string_member[20];
    int member;
};

int main()
{
    typedef struct structure variable ;

    variable v = {"C programming", 24};

    cout<<"string_member : "<<v.string_member<<endl;
    cout<<"member : "<<v.member<<endl;
}
