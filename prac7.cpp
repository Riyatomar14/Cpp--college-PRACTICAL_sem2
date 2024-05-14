/* gcd with and without recursion */

// recursion

#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
int gcdNonRecursive(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a;
    int b;
    cout<<"enter number1:";
    cin>>a;
    cout<<"enter number2:";
    cin>>b;
    result=gcd(num1,num2);
    cout<<"GCD:"<<result;
    cout << "GCD of " << a << " and " << b << " is: " << gcdNonRecursive(a, b) << endl;
    return 0;
}
