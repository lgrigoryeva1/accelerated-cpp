#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // square
    const int side = 4;
    for (int i = 0; i < side; ++i){
        for (int j = 0; j < side; ++j){
            if (i == 0 || i == side - 1) {
                cout << "a ";
            }
            else {
                if (j == 0 || j == side - 1) {
                    cout << "a ";
                } 
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    // rect
    // triangle 
    

    return 0;
    
}
