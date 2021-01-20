#include <iostream>
using std::cout;
using std::endl;

int main() 
{
    signed short int min = -6;
    int i = 10;
    while (i > min) 
    {
        cout << i << endl;
        --i;
    }

    return 0;
}
