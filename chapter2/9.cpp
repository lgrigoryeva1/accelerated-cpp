#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter 2 numbers please" << endl;
    int first;
    int second;
    cin >> first;
    cin >> second;

    if (first > second){
        cout << first << " is bigger than " << second << endl;
    } else
    {
        cout << second << " is bigger than " << first << endl;
    }

    return 0;
}
