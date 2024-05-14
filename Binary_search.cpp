/* search a given element in a set of N number of binary search */

// Binary search without recursion
#include <iostream>
using namespace std;

int binarySearchNon_Recursion(int arr[], int size, int key) {
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


int binarySearchRecursion(int arr[], int key, int high, int low) {
    if (low > high) return -1;
    
    int mid = (high + low) / 2;
    if (key == arr[mid]) {
        return mid;
    }
    else if (key > arr[mid]) {
        return binarySearchRecursion(arr, key, high, mid + 1);
    }
    else {
        return binarySearchRecursion(arr, key, mid - 1, low);
    }
}

int main() {
    int arr[] = {1, 3, 6, 8, 9, 10, 15, 34, 54, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 8;
    int result = binarySearchNon_Recursion(arr, size , key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    int high = size - 1; 
    int low = 0;
    int Result = binarySearchRecursion( arr, key, high ,low);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    } 
    return 0;
}
