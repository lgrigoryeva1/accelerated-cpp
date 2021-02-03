#include <iostream>

using std::cout;
using std::cin;
using std::string;

class Person {
    string name;
    string address;

    string get_name() { return name; }
    string get_address() { return address; }

    // const ?? to override this??
};

int main() {
    return 0;
}
