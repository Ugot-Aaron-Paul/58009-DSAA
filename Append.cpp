#include <iostream>
using namespace std;

int main() {
    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int New = 11;

    int NewElem = 50;
    numbers[New-1] = NewElem;

    for (int i = 0; i < New; i++) {
        cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

