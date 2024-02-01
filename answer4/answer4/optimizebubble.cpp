#include <iostream>
// The iostream header is included to enable standard input/output operations
using namespace std;
// Bringing the entire std namespace into scope

// Optimized Bubble Sort Function
void optimizedBubbleSort(int arr[], int n) {
    // Flag to check if any swaps occurred in a pass
    bool swapped;

    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        // Inner loop for comparing and swapping elements
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Set swapped to true to indicate a swap occurred
                swapped = true;
            }
        }

        // If no swaps occurred in this pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    // Given unsorted array
    int arr[] = { 9, 5, 3, 2, 7, 11, 13, 15, 12, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the optimizedBubbleSort function to sort the array
    optimizedBubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Indicates successful execution and program termination
    return 0;
    // Indicates successful execution and program termination
}