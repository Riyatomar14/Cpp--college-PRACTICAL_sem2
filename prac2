/* write a program to remove duplicate from the array */

#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    int index = 0;
    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;
        
        for (int j = 0; j < index; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[index++] = arr[i];
        }
    }
    n = index; //update value of n
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
