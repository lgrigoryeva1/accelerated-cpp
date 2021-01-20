#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int pad = 1;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;
    // use switch ?
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        if (r == 0 || r == 4){
            cout << string(cols, '*');
        }
        else if (r == 1 || r == 3){
            cout << "* " << string(cols - 4, ' ') << " *";
        }
        else if (r == 2){
            cout << "* " << greeting << " *";
        }

        cout << endl;
    }

    return 0;
    
}
