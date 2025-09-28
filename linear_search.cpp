#include <iostream>
#include <vector>

using namespace std;

// Function to perform Linear Search on an unsorted vector
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    // Linear search works on unsorted data
    vector<int> numbers = {34, 1, 89, 5, 42, 10};
    int target = 42;
    
    int index = linearSearch(numbers, target);
    
    cout << "Array: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    if (index != -1) {
        cout << "Linear Search: Element " << target << " found at index " << index << endl;
    } else {
        cout << "Linear Search: Element " << target << " not found." << endl;
    }
    
    target = 99; // Test case for not found
    index = linearSearch(numbers, target);
    if (index == -1) {
        cout << "Linear Search: Element " << target << " not found." << endl;
    }

    return 0;
}


//*****************OUTPUT**********
//Array: 34 1 89 5 42 10 
//Linear Search: Element 42 found at index 4
//Linear Search: Element 99 not found.
