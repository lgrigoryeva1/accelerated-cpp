#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int max = 10;
    unsigned int product = 1;

    for (int i = 1; i < max; ++i)
    {
        product *= i;
    }

    cout << product << endl;

    return 0;
}
