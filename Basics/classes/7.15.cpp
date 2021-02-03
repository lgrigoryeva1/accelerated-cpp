#include <iostream>

using std::cout;
using std::cin;
using std::string;

struct Person {
    //Person() = default;
    Person();
    Person(const string &n): name(n) {}

    string name;
    string address;

};

Person::Person()
{
    cout << "Hi" << std::endl;
}

int main() {
    Person p1;
    Person p2("mila");
    Person p3;
    cout << p2.name << " is awesome" << std::endl;
    return 0;
}
