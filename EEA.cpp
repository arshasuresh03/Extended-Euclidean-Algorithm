#include <iostream>

// Function to find the extended gcd
int extended_gcd(int a, int b, int &x, int &y) {
    // Base Case
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    // Variables to store results of recursive call
    int x1, y1;
    int gcd = extended_gcd(b % a, a, x1, y1);

    // Update x and y using results of recursive
    // call
    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int x, y;
    int gcd = extended_gcd(a, b, x, y);
    std::cout << "GCD of " << a << " and " << b << " is " << gcd << std::endl;
    std::cout << "Coefficients x and y are: " << x << " and " << y << std::endl;

    return 0;
}
