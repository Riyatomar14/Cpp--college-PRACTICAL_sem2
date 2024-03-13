/* gcd with and without recursion */

#include <iostream>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdRecursive(b, a % b);
}

int main() {
    int num1 = 24, num2 = 36;
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;
    result = gcdRecursive(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
