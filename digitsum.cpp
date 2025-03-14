#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        int temp = number;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        number /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}