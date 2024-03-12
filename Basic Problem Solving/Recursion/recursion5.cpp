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