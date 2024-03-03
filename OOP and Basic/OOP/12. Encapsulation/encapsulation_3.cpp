#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    string getName() {
        return name;
    }

    void setName(string newName) {
        name = newName;
    }

    int getAge() {
        return age;
    }

    void setAge(int newAge) {
        if (newAge >= 0 && newAge <= 120) {
            age = newAge;
        }
    }
};

int main() {
    Person person;
    person.setName("Alice");
    person.setAge(30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
