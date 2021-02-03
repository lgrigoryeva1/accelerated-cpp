#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

    Sales_item item0, item1;

    if (cin >> item0){
        while(cin >> item1){
            item0 += item1;
        cout << item0 << endl;
        }
    }

    return 0;
}
