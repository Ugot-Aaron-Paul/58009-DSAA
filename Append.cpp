#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    
    for (int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }
    
    numbers.push_back(11);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << std::endl;

    return 0;
}

