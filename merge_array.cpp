/* merge two array */

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int cl = n1 + n2;
    int c[cl];
    int i, j;
    for (i = 0; i < n1; i++) {
        c[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        c[n1 + j] = arr2[j];
    }
    for (i = 0; i < cl; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
