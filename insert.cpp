#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int insertValue = 11;
    int insertIndex = 1;
    
    for (int i = size; i > insertIndex; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[insertIndex] = insertValue;

    for (int i = 0; i < size + 1; i++) {
        cout << numbers[i] << " ";
    }

    cout << std::endl;

    return 0;
}

