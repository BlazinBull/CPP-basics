//Write a programs that does this using Vectors. Make sure to use iterators

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
        return 1;
    }

    // Initialize iterators
    auto minIterator = numbers.begin();
    auto maxIterator = numbers.begin();

    // Iterate through the vector using iterators
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < *minIterator) {
            minIterator = it; // Update min iterator if a smaller element is found
        }
        if (*it > *maxIterator) {
            maxIterator = it; // Update max iterator if a larger element is found
        }
    }

    // Print the smallest and largest numbers
    std::cout << "Smallest: " << *minIterator << std::endl;
    std::cout << "Largest: " << *maxIterator << std::endl;

    return 0;
}
