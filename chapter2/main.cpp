#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";
    // read the name
    string name;
    cin >> name;
    // build the msg
    const string greeting = "Hello, " + name + "!";
    // num of blanks around greeting
    const int pad = 1;
    //total num of rows
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    //write a blank line to separate output from input
    cout << endl;
    // write rows "rows" of output
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        // invaraint: we have written c chars so far in the current row
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout <<" ";
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
    
}

// note: ++i will increment the value of i and return incremented value
// i = 1
// j = ++i;
// i is 2, j is 2
// i++ will increment the value of i, but return the original value before incrementing
// i = 1;
// j = i++;
// i is 2, j is 1
// both work in for loops, ++i is more common

// we use size_type bc int might not be enough (when coming from cin>>)(for string)
// size_t is the type returned by the "sizeof" operator

// || is an OR operator, returns true if either of the statements is true
// && is an AND operator, returns true if both conditions are true
// rel_ops is deprecated in C++20, three-way comparison instead <=>

// short 16 bits
// long 32 bits

// uint16_t is guaranteed to be an unsigned interger that is 16 bits
// unsigned short int's size is determined by the compiler (16 bits most of the time)
