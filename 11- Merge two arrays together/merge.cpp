#include <iostream>
#include <vector>

std::vector<int> merge(const std::vector<int> &arr1,
                       const std::vector<int> &arr2) {

  // Create a new vector to store the merged result
  std::vector<int> mergedArray;

  // Reserve memory for the merged array to avoid frequent reallocation
  mergedArray.reserve(arr1.size() + arr2.size());

  // Copy elements from the first array
  mergedArray.insert(mergedArray.end(), arr1.begin(), arr1.end());

  // Copy elements from the second array
  mergedArray.insert(mergedArray.end(), arr2.begin(), arr2.end());

  return mergedArray;
}

int main() {
  
  // Prompt the user to enter elements for the first array
    std::cout << "Enter the number of elements for the first array: ";
    int size1;
    std::cin >> size1;
    std::vector<int> arr1(size1);
    std::cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }

    // Prompt the user to enter elements for the second array
    std::cout << "Enter the number of elements for the second array: ";
    int size2;
    std::cin >> size2;
    std::vector<int> arr2(size2);
    std::cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
    }

  // Merge the arrays
  std::vector<int> mergedArray = merge(arr1, arr2);

  // Display the merged array
  std::cout << "Merged array:";
  for (int num : mergedArray) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}