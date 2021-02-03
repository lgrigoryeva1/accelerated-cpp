#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

    Sales_item book1, book2;
    cin >> book1 >> book2;

    cout << book1 + book2 << endl;

    return 0;
}
