#include <iostream>
#include <vector>
#include <algorithm>

void sortArray(std::vector<int> &arr, int n)
{
    // Sort the array using the sort function
    std::sort(arr.begin(), arr.end());

    // // Remove duplicates from the sorted array
    // arr.erase(std::unique(arr.begin(), arr.end()), arr.end());

    // Additional code can be added here if needed.
}

int main()
{
    // Example usage of sortArray
    std::vector<int> numbers = {5, 2, 8, 2, 3, 5, 1, 8};
    int size = numbers.size();

    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    sortArray(numbers, size);

    std::cout << "\nSorted and deduplicated array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
