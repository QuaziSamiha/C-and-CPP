#include<iostream>
#include<string>

using namespace std;

/*
encapsulation is a process of combining variables and functions in a single unit(class).
protecting data by declaring them as private.
private data will be hidden from other classes and they can only be accessed through public function of their current
class that is known as data hiding.
*/

class class_name
{
private :
    string m;
public :
    void setM(string m)
    {
        this->m = m;
    }
    string getM()
    {
        return m;
    }
};

int main()
{
    class_name ob;

    ob.setM("17 August,2020");
    cout << ob.getM() << endl;
}

