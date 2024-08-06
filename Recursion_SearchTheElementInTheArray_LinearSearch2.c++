#include <iostream>

// Function declaration for linear search
int linearSearch(int *arr, int n, int x);

int main() {
  // Array to search
  int arr[] = {1, 2, 3, 4, 5};
  
  // Calculate the size of the array
  int size = sizeof(arr) / sizeof(arr[0]);
  
  // Value to search for
  int searchValue = 3;

  // Call the linearSearch function to find the index of the search value
  int result = linearSearch(arr, size, searchValue);

  // Check the result and print appropriate messages
  if (result != -1) {
    std::cout << "Element " << searchValue << " found at index " << result << "." << std::endl;
  } else {
    std::cout << "Element " << searchValue << " not found in the array." << std::endl;
  }

  return 0;
}

// Linear search function definition
int linearSearch(int *arr, int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;  // Return the index if the element is found
    }
  }
  return -1;  // Return -1 if the element is not found
}
