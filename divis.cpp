#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 3 == 0) {
        if (number % 5 == 0) {
            std::cout << "The number is divisible by both 3 and 5." << std::endl;
        } else {
            std::cout << "The number is divisible by 3 but not by 5." << std::endl;
        }
    } else {
        if (number % 5 == 0) {
            std::cout << "The number is divisible by 5 but not by 3." << std::endl;
        } else {
            std::cout << "The number is not divisible by either 3 or 5." << std::endl;
        }
    }

    return 0;
}