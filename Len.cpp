#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int num = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << num << std::endl;

    return 0;
}

