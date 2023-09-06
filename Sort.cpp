#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char numbers[] = {'A', 'D', 'B', 'F', 'G', 'C', 'E'};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, numbers + size);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << std::endl;

    return 0;
}

