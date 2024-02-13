#include <iostream>
using namespace std;

// static or early binding

class CompileTimePolymorphism {
public:
    int add(int x, int y) {
        return x + y;
    }

    int add(int x, int y, int z) {
        return x + y + z;
    }

    int add(double x, int y) {
        return static_cast<int>(x) + y;
    }

    int add(int x, double y) {
        return x + static_cast<int>(y);
    }
};

int main() {
    CompileTimePolymorphism demo;
    cout << demo.add(2, 3) << endl;        // Calls the first method, output: 5
    cout << demo.add(2, 3, 4) << endl;     // Calls the second method, output: 9
    cout << demo.add(2, 3.4) << endl;      // Calls the fourth method, output: 5
    cout << demo.add(2.5, 3) << endl;      // Calls the third method, output: 5

    return 0;
}
