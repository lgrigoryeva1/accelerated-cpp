#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
    int usernum;
    vector<int> v1;
    while (cin >> usernum)
    {
        v1.push_back(usernum);
    }

    return 0;
}
