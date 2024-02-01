#include <iostream>
// The iostream header is included to enable standard input/output operations
using namespace std;
// Bringing the entire std namespace into scope

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    // Outer loop iterates through all elements except the last one
    for (int i = 0; i < n - 1; i++) {
        // Inner loop iterates through the unsorted part of the array
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Initialize an array
    int arr[] = { 2, 7, 3, 9, 1 };

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}
// Indicates successful execution and program termination
return 0;
   
}