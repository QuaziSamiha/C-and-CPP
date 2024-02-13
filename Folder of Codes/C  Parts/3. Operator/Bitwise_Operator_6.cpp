#include<iostream>

using namespace std;

int main()
{
    int v1 = 32, v2, v3, v4, v5;

    cout<<"v1 : "<<v1<<endl;

    cout<<endl<<"right shift : "<<endl;
    v2 = v1>>3;
    cout<<"v2 (v1>>3) : "<<v2<<endl;

    v3 = v1>>2;
    cout<<"v3 (v1>>2) : "<<v3<<endl;
 //------------------------------------------------------------------------------------
    cout<<endl<<"left shift : "<<endl;
    v4 = v1<<3;
    cout<<"v4 (v1<<3) : "<<v4<<endl;

    v5 = v1<<2;
    cout<<"v5 (v1<<2) : "<<v5<<endl;
}

/*

for right shift : ( divide each time by 2)
v1 = 32

 32 16 8 4 2 1
---------------------
 1  0  0 0 0 0     decimal = 32
---------------------
    1  0 0 0 0     decimal = 16 ( v1>>1 ) ( 32/2 = 16)
---------------------
       1 0 0 0     decimal = 8  ( v1>>2 ) ( 16/2 = 8)
---------------------
         1 0 0     decimal = 4  ( v1>>3 ) ( 8/2 = 4)
----------------------------------------------------------
*/
