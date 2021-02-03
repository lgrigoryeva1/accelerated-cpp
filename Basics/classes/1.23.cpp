#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

    Sales_item item0, item1;

    cin >> item0 >> item1;
    cout << item0.isbn() << endl;

    return 0;
}
