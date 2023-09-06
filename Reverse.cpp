#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    
    numbers.push_back(5);
    numbers.push_back(4);
    numbers.push_back(3);
    numbers.push_back(2);
    numbers.push_back(1);

    // Reverse the vector
    reverse(numbers.begin(), numbers.end());

    // Print the reversed vector
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << std::endl;

    return 0;
}

