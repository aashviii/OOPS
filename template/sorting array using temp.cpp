
#include <iostream>
#include <algorithm>

// Template function to print the array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Template function to sort the array
template <typename T>
void sortArray(T arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Array before sorting: ";
    printArray(intArray, size);

    sortArray(intArray, size);

    std::cout << "Array after sorting: ";
    printArray(intArray, size);

    return 0;
}


