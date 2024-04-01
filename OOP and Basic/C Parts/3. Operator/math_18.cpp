// use of trunc() function : it removes after decimal point part
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double x1 = 5.35;
    cout<<"x1 : "<<x1;

    double result_1 = trunc(x1);
    cout<<endl<<"trunc("<<x1<<") : "<<result_1<<endl<<endl;
//----------------------------------------------------------------------------------------------------
    double x2 = 5.75;
    cout<<"x2 : "<<x2;

    double result_2 = trunc(x2);
    cout<<endl<<"trunc("<<x2<<") : "<<result_2<<endl<<endl;
//-----------------------------------------------------------------------------------------------------
    double x3 = 0.6735463537;
    cout<<"x3 : "<<x3;

    double result_3 = trunc(x3);
    cout<<endl<<"trunc("<<x3<<") : "<<result_3<<endl;

}

