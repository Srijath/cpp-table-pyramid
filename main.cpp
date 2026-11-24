#include <iostream>
#include <iomanip>

int main() {
    int number;
    int height;

    std::cout << "Enter a number for the multiplication table: ";
    if (!(std::cin >> number)) {
        std::cout << "Please enter a whole number.\n";
        return 1;
    }

    std::cout << "Enter the pyramid height: ";
    if (!(std::cin >> height)) {
        std::cout << "Please enter a whole number.\n";
        return 1;
    }

    // Multiplication table: 1 through 10
    std::cout << "\nMultiplication table for " << number << ":\n";

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(4) << number
                  << " x " << std::setw(2) << i
                  << " = " << std::setw(5) << number * i << '\n';
    }

    // A height of zero or less means there are no pyramid rows.
    if (height <= 0) {
        std::cout << "\nPyramid height must be positive; no pyramid printed.\n";
        return 0;
    }

    // Pyramid: each row has spaces followed by an odd number of stars.
    std::cout << "\nStar pyramid:\n";

    for (int row = 1; row <= height; ++row) {
        for (int space = 1; space <= height - row; ++space) {
            std::cout << ' ';
        }

        for (int star = 1; star <= 2 * row - 1; ++star) {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}
