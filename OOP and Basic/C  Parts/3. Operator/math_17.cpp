// use of round() function
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double x1 = 5.35; // round of 5.1 to 5.4 = 5
    cout<<"x1 : "<<x1;

    double result_1 = round(x1);
    cout<<endl<<"round("<<x1<<") : "<<result_1<<endl<<endl;

//-----------------------------------------------------------------------------------------------------

    double x2 = 5.75; // round of 5.5 to 5.9 = 6
    cout<<"x2 : "<<x2;

    double result_2 = round(x2);
    cout<<endl<<"round("<<x2<<") : "<<result_2<<endl;
}
