#include <iostream>

int main() {
    int number;
    factorial = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << number << " = " << factorial << std::endl;
    }

    return 0;
}
