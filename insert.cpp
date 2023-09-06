#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    for (int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }

    numbers.insert(numbers.begin() + 1, 11);  // Insert 11 at index 1

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << std::endl;

    return 0;
}

