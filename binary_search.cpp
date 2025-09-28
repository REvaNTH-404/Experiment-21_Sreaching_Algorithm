#include <iostream>
#include <vector>
#include <algorithm> // For sorting the vector

using namespace std;

// Function to perform Binary Search on a sorted vector
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        // Calculate the middle index
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    // Binary Search REQUIRES a sorted array
    vector<int> numbers = {1, 5, 10, 34, 42, 89}; // Sorted array
    int target = 34;

    cout << "Sorted Array: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    
    int index = binarySearch(numbers, target);
    
    if (index != -1) {
        cout << "Binary Search: Element " << target << " found at index " << index << endl;
    } else {
        cout << "Binary Search: Element " << target << " not found." << endl;
    }

    target = 7; // Test case for not found
    index = binarySearch(numbers, target);
    if (index == -1) {
        cout << "Binary Search: Element " << target << " not found." << endl;
    }
    
    return 0;
}


//*********OUTPUT*************
//Sorted Array: 1 5 10 34 42 89 
//Binary Search: Element 34 found at index 3
//Binary Search: Element 7 not found.
