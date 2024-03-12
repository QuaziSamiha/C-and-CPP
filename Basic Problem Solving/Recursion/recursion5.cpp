#include <iostream>
// how many times the get function invoked
using namespace std;

int count = 0;

int get(int n)
{
    count++;
    if (n < 1)
    {
        return 0;
    }
    get(n - 1);
    get(n - 3);
    cout << n << "\t";
}

int main(){
     get(5);
     
     cout << count << endl; // total 17 times
    return 0;
}
/*
g(0)=1, not value, no of call --> single call
g(-2)=1, --> single call
g(-1)=1, --> single call
g(1)=3 --> 3 calls
g(2)=5 --> 5 calls
g(3)=7 --> 7 calls
g(4)=11 --> 11 calls
g(5)=17 --> 17 calls
*/