/* Online C++ Compiler and Editor */
#include <iostream>

using namespace std;

class Rectangle{
    int a, b;
    public: 
    Rectangle(int p1, int p2){
        a = p1;
        b = p2;
    }
    int area(){
        return a*b;
    }
};

class Circle{
    int r;
    public: 
    Circle(int p1){
       r = p1 ;
    }
    double area(){
        return 3.14*r*r;
    }
};

int main()
{
   Circle obj1(1);
   cout<< "Area of Rectangle: " << obj1.area() << endl;
   Rectangle obj2(5, 6);
   cout << "Area of Circle: " << obj2.area() << endl;
   return 0;
}
