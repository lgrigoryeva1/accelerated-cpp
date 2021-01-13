#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // build the 2nd and 4th lines of the output
    // spaces var has the size of greetings length
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    //build the 1st and 5th lines of the output
    const std::string first(second.size(), '*');

    //write it all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}

// Notes
// const doesn't do anything for the program, but lets it know
// those vars won't change for the rest of their lifetime
// makes it easier to understand the program
// the vaue of const doesn't need to be const

// using parentheses in variable definition tells it to construct a value
// not saying explicitly like "="

// character literal is single quoted ' '
// string literal is double quoted " "


