// Hybrid Inheritance and use of virtual base class  (2:09am,14 May,2020 & 8:15am,19 August,2020)
#include<iostream>

using namespace std;

class superclass_1
{
protected :
    int m_superclass_1; // it will be protected in sub-class-1 & sub-class-2
public :
    void function_superclass_1(void);  // it will be public in sub-class-1 & sub-class-2
};

class superclass_2
{
protected :
    int m_superclass_2; // they will be protected in sub-class-2
public :
    void function_superclass_2(void); // it will be public in sub-class-2
};

class subclass_1 : virtual public superclass_1 // single inheritance
{
protected :
    int m_subclass_1; // it will be protected in sub-class-2
public :
    void function_subclass_1(void);  // it will be public in sub-class-2
};

class subclass_2 : public virtual superclass_1, public superclass_2, public subclass_1 // multiple inheritance
{
    int m_subclass_2; // private data member
public :
    void function_subclass_2(void);
};

void superclass_1 :: function_superclass_1(void)  // it will be public in sub-class-1 & sub-class-2
{
    cout<<"Enter an integer for superclass_1 : ";
    cin>>m_superclass_1;
}

void superclass_2 :: function_superclass_2(void) // it will be public in sub-class-2
{
    cout<<"Enter an integer for superclass_2 : ";
    cin>>m_superclass_2;
}

void subclass_1 :: function_subclass_1(void)  // it will be public in sub-class-2
{
    function_superclass_1();

    cout<<"Enter an integer for subclass_1   : ";
    cin>>m_subclass_1;
}

void subclass_2 :: function_subclass_2(void)
{
    function_superclass_2();

    cout<<"Enter an integer for subclass_2   : ";
    cin>>m_subclass_2;

    cout<<endl;
    cout<<"m_superclass_1 : "<<m_superclass_1<<endl;
    cout<<"m_superclass_2 : "<<m_superclass_2<<endl;
    cout<<"m_subclass_1   : "<<m_subclass_1<<endl;
    cout<<"m_subclass_2   : "<<m_subclass_2<<endl;
}

int main()
{
    subclass_2 object;

    object.function_subclass_1();
    object.function_subclass_2();
    return 0;
}
