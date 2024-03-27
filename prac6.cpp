/* search a given element in a set of N number of binary search */

// Binary search without recursion
i#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int high = size - 1;
    int low = 0;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (key == arr[mid]) {
            return mid;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 6, 8, 9, 10, 15, 34, 54, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 8;
    int result = binarySearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

// Binary search with recursion
#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int high, int low) {
    if (low > high) return -1;
    
    int mid = (high + low) / 2;
    if (key == arr[mid]) {
        return mid;
    }
    else if (key > arr[mid]) {
        return binarySearch(arr, key, high, mid + 1);
    }
    else {
        return binarySearch(arr, key, mid - 1, low);
    }
}

int main() {
    int arr[] = {1, 3, 6, 8, 9, 10, 15, 34, 54, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 8;
    int high = n - 1; 
    int low = 0;
    int result = binarySearch(arr, key, high, low);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    } 
    return 0;
}


