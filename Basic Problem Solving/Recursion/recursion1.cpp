#include <iostream>

using namespace std;

void fun(int n);

int main(){
    fun(3);
    return 0;
}

void fun(int n){
    if(n > 0){
        cout << n << "\t" ;
        fun(n-1);
        cout << n << "\t" ;
        fun(n-1);
        cout << n << "\t" ;
    }
}