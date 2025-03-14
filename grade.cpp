#include <iostream>

int main() {
    int marks;
    char grade;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    std::cout << "Your grade is: " << grade << std::endl;

    return 0;
}