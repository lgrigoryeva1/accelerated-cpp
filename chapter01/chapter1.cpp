#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your name: ";
    
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;

    // Chapter 1 notes:

    // I/o library saves output in an internal data structure, buffer
    // Buffer is flashed when it's full
    // Also when you need to read from cin
    // When you tell it to be flashed  (std::endl)

    return 0;
}
