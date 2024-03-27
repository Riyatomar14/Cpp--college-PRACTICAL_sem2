/*Write a program to compute the sum of the first n terms of the following series:
Sum=1-1/2²+1/3³----*/

#include <iostream>
using namespace std;

double seriesSum(int n) {
    double sum = 0.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        sum += term;
        term = -term / ((i + 1) * (i + 1));
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double result = seriesSum(n);
    cout << "Sum of the series up to " << n << " terms: " << result << endl;

    return 0;
}
