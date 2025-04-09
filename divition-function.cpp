#include <iostream>
#include <stdexcept>

double divide(double num1, double num2) {
    if (num2 == 0) {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return num1 / num2;
}

int main() {
    try {
        double result = divide(10, 2);
        std::cout << "Result: " << result << std::endl;  // Output: 5
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}