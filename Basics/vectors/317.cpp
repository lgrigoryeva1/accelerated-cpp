#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    string word;
    vector <string> myvec;
    
    while (cin >> word)
    {
        myvec.push_back(word);
    }
    for (auto &i : myvec)
        for (auto &j : i)
            j = toupper(j);
    
    for (int i = 0; i != myvec.size(); ++i)
    {
        cout << myvec[i] << "\t";
        if ((i + 1) % 8 == 0)
            cout << std::endl;
    }

    return 0;
}
