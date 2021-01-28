#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto i : v3) // original snippet uses &i (for modification purposes?), but here i is a copy of the actual item in the v3 object
        cout << i << " ";
    cout << endl;
    // repeat for the rest of the vectors
    return 0;
}
